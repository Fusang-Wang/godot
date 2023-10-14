#include "timer_test.h"

void Timertest::_notification(int p_notification) {
    // 放置在非游戏运行状态下调用process方法
    if (Engine::get_singleton()->is_editor_hint()) {
        return;
    }
    switch(p_notification)
    {
        case NOTIFICATION_READY:
        {
			_check_input_map();
			// 设置process状态（必须）
            set_physics_process(true);
            set_process(false);
            print_line("NOTIFICATION_READY");
            break;
        }
        case NOTIFICATION_PHYSICS_PROCESS:
        {
			timer_count += 1;
			// 判断是否有按钮事件
            if (Input::get_singleton()->is_action_just_pressed("test_button"))
			{
                print_line(timer_count);
            }
            break;
        }

        default:
        {
            break;
        }
    }
}


void Timertest::_bind_methods() {
	ClassDB::bind_method(D_METHOD("_notification", "value"), &Timertest::_notification);
}

// 检查是否有特定的action以免报错
void Timertest::_check_input_map() {
	if (!InputMap::get_singleton()->has_action("test_button"))
	{
		InputMap::get_singleton()->add_action("test_button");
		print_line("Please give test_button a key!");
	}

}

Timertest::Timertest() {
	timer_count = 0;
}

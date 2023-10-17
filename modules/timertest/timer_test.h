#ifndef TIMERTEST_H
#define TIMERTEST_H

#include "scene/2d/node_2d.h"
#include "core/input/input.h"
#include "core/input/input_map.h"



class Timertest : public Node2D {
	GDCLASS(Timertest, Node2D);

	mutable int timer_count;

protected:
	static void _bind_methods();

public:
	void _check_input_map();
	void _notification(int p_notification);
	void set_timer_count(const int &p_timer_count);
	int get_timer_count() const;
	Timertest();
};

#endif // TIMERTEST_H

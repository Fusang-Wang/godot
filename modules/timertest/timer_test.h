#ifndef TIMERTEST_H
#define TIMERTEST_H

#include "scene/2d/node_2d.h"
#include "core/input/input.h"
#include "core/input/input_map.h"



class Timertest : public Node2D {
	GDCLASS(Timertest, Node2D);

	int timer_count;

protected:
	static void _bind_methods();
	static void _check_input_map();

public:
	void _notification(int p_notification);

	Timertest();
};

#endif // TIMERTEST_H

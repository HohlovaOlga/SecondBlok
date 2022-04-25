#pragma once
#include "Queue.h"

class Iterator
{
private:
	int index;
	Queue queue;
public:
	friend class Queue;
	Iterator(Queue& que);
	void start();
	void next();
	bool finish();
	double getValue();
};
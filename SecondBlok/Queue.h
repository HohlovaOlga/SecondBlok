#pragma once

class Queue
{
private:
	double* arr;
	int size;
	int firstPointer;
	int lastPointer;
public:
	friend class Iterator;
	Queue();
	explicit Queue(int size);
	explicit Queue(const Queue& copy);
	void addElem(double elem);
	double getElem();
	double peek();
	int getSize();
	bool isEmpty();
	bool isFull();
	void clear();
	void Display();
};
#include "Iterator.h"
//конструктор
Iterator::Iterator(Queue& que) {
	this->index = que.firstPointer;
	this->queue = que;
}
//начать перебор элементов
void Iterator::start() {
	index = queue.firstPointer;
}
//перейти к следующему элементу
void Iterator::next() {
	index = (index + 1) % queue.size;
}
//проверка, все ли проитерировано
bool Iterator::finish() {
	if (queue.isEmpty()) {
		return 1;
	}
	return index == queue.lastPointer;
}
//получить очередной элемент очереди
double Iterator::getValue() {
	return queue.arr[index];
}
#include <iostream>
#include "Queue.h"
#include "Iterator.h"

int main()
{
	setlocale(LC_ALL, "ru");
	Queue queue1(10);
	std::cout << "Очередь пустая? - " << queue1.isEmpty() << std::endl;
	for (int i = 0; i < 5; i++) {
		queue1.addElem(i);
	}
	queue1.Display();
	std::cout << "Теперь она пустая? - " << queue1.isEmpty() << std::endl;
	Queue queue2(queue1);
	queue1.addElem(5);
	queue2.Display();
	std::cout << queue1.peek() << std::endl;
	queue1.clear();
	queue1.Display();
	Iterator iteratorA = Iterator(queue2);
	iteratorA.start();
	while (!iteratorA.finish()) {
		std::cout << iteratorA.getValue() << std::endl;
		iteratorA.next();
	}

}
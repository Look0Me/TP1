#include "Queue.h"

Queue::Queue()
{
	this->size = 0;
}

Queue::~Queue()
{
}

void Queue::pop()
{
	cout << "Element popped!" << endl;
}

void Queue::push()
{
	cout << "Element pushed!" << endl;
}

int Queue::getsize()
{
	return this->size;
}

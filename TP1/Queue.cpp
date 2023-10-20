#include "Queue.h"

Queue::Queue()
{
	this->size = 0;
}

Queue::~Queue()
{
	queer.~Keeper();
}

//void Queue::pop()
//{
//	queer.pop_front();
//}

//void Queue::push()
//{
//	queer.push_front();
//}

//int Queue::getsize()
//{
//	size= queer.GetSize();
//	return size;
//}

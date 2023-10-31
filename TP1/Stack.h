#pragma once
#include "Queue.h"

class Stack : public Queue
{
	public:
		Stack();
		~Stack();
		void pop();
		void push(int d);
		int getsize();
		void show();
		void exp();
		void spawn(int num);
	private:
		Keeper klis;
		int size;
};


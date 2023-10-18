#pragma once
#include "Queue.h"

class Deck: public Queue
{
	public:
		Deck();
		~Deck();
		void pop();
		void push(int d);
		int getsize();
		void show();
		void exp();
	private:
		Keeper klis;
		int size;
};


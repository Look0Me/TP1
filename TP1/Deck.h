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
		void spawn(int num);
	private:
		Keeper klis;
		int size;
};


#pragma once
#include "Queue.h"

class List: public Queue
{
	public:
		List();
		~List(); 
		void pop();
		void push(int d);
		int getsize();
		void show();
		//Node* head();
		void exp();
	private:
		Keeper klis;
		int size;
};


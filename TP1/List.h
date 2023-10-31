#pragma once
#include "Queue.h"

class List: public Queue
{
	public:
		List();
		List(int num);
		~List(); 
		void pop();
		void spawn(int num);
		void push(int d);
		int getsize();
		void show();
		//Node* head();
		void exp();
	private:
		Keeper klis;
		int size;
};


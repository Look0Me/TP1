#pragma once
#include "Keeper.h"
#include<fstream>

using namespace std;
class Queue
{
	public:
		Queue();
		~Queue();
		virtual void pop();
		virtual void push();
		virtual int getsize();

	private:
		int size;
};




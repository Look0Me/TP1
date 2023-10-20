#pragma once
#include "Keeper.h"
#include<fstream>

using namespace std;
class Queue
{
	public:
		Queue();
		~Queue();
		virtual void pop()=0;
		//virtual void push();
		virtual int getsize() = 0;

	private:
		int size;
		Keeper queer;
};




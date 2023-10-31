#pragma once
#include "Keeper.h"
#include<fstream>

using namespace std;
class Queue
{
	public:
		Queue();
		//virtual int& operator[](const int index) = 0;
		virtual ~Queue();
		virtual void pop()=0;
		virtual void spawn(int num) = 0;
		//virtual void push();
		virtual int getsize() = 0;

	private:
		int size;
		Keeper queer;
};




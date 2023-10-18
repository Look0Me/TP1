#pragma once
#include "Queue.h"
#include "List.h"
#include "Deck.h"
#include "Stack.h"

class Que: public Queue
{
public:
	Que();
	~Que();
	void pop();
	void popL();
	void popD();
	void popS();

	void push();
	void pushL(int d = -1);
	void pushD(int d = -1);
	void pushS(int d = rand() % 10);

	int getsize();

	void show();
	void showL();
	void showD();
	void showS();

	void exp();
	void imp();
	void refresh();

	bool isNumeric(string const& str);
	/*Node& getheadl();
	Node& getheadd();
	Node& getheads();*/

private:
	int size;
	Keeper Qu;
	List lis;
	Deck dec;
	Stack ste;
};


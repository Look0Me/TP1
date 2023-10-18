#include "Stack.h"

Stack::Stack()
{
	this->size = 0;
	klis.Spawn(3);
}

Stack::~Stack()
{
	klis.clear();
	cout << "Stack cleared" << endl;
}

void Stack::pop()
{
	klis.pop_front();
}

void Stack::push(int d)
{
	klis.push_front(d);
}

int Stack::getsize()
{
	this->size = klis.GetSize();
	return size;
}

void Stack::show()
{
	klis.Show();
}

void Stack::exp()
{
	ofstream fout("2.txt", ios::app);
	int si = klis.GetSize();
	fout << "-3" << endl;
	for (int i = 0; i < si; i++)
		fout << klis[i] << endl;
	fout.close();
}

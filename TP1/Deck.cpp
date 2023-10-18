#include "Deck.h"

Deck::Deck()
{
	this->size = 0;
	klis.Spawn(3);
}

Deck::~Deck()
{
	klis.clear();
	cout << "Deck cleared" << endl;
}

void Deck::pop()
{
	int i = 0;
	cout << "What element do you want to pop?\n1)Front\n2)Back" << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		klis.pop_front();
		break;
	case 2:
		klis.pop_back();
		break;
	}
}

void Deck::push(int d)
{
	int i = 1;
	if (d == -1)
	{
		d = rand() % 10;
		cout << "Where do you want to push the new element?\n1)Front\n2)Back" << endl;
		cin >> i;
	}
	switch (i)
	{
	case 1:
		klis.push_front(d);
		break;
	case 2:
		klis.push_back(d);
		break;
	}
}

int Deck::getsize()
{
	this->size = klis.GetSize();
	return size;
}

void Deck::show()
{
	klis.Show();
}

void Deck::exp()
{
	ofstream fout("2.txt", ios::app);
	int si = klis.GetSize();
	fout << "-2" << endl;
	for (int i = 0; i < si; i++)
		fout << klis[i] << endl;
	fout.close();
}

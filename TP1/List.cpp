#include "List.h"

List::List()
{
	this->size = 0;
}

List::List(int num)
{
	this->size = 0;
	klis.Spawn(num);
}

List::~List()
{
	klis.clear();
	cout << "List cleared: " << this << endl;
}

void List::pop()
{
	int i = 0;
	cout << "What element do you want to pop?" << endl;
	cin >> i;
	klis.pop(i);

}

void List::spawn(int num)
{
	this->klis.Spawn(num);
}

void List::push(int d)
{
	int i = 0;
	if (d==-1)
	{
		d = rand() % 10;
		cout << "Where do you want to push the new element?" << endl;
		cin >> i;
	}
	klis.push(i,d);
}

int List::getsize()
{
	this->size = klis.GetSize();
	return size;
}

void List::show()
{
	klis.Show();
}

void List::exp()
{
	ofstream fout("2.txt", ios::app);
	int si = klis.GetSize();
	fout << "-1" << endl;
	for (int i = 0; i < si; i++)
		fout << klis[i] << endl;
	fout.close();
}

//Node* List::head()
//{
//	return this->klis.gethead();
//}

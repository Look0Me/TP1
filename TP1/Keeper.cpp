#include "Keeper.h"
#include<iostream>
#include <conio.h>
#include <windows.h>

Keeper::Keeper()
{
	Size = 0;
	head = nullptr;
	tail = nullptr;
}

Keeper::Keeper(int siz)
{
	Size = 0;
	head = nullptr;
	tail = nullptr;
	Spawn(siz);
}

Keeper::~Keeper()
{
	clear();
	/*cout << "111" << endl;*/
}

Keeper::Keeper(const Keeper& other)
{
	int cnt = 0;
	this->Size = other.Size;

	Node* current = nullptr;
	Node* current1 = nullptr;
	this->head = current;


	for (cnt = 0; cnt < this->Size; cnt++)
	{
		if (head == nullptr)
		{
			this->head = new Node(other.head->data);
			this->tail = this->head;
		}
		else
		{
			current = other.head;
			current1 = this->head;

			while (current1->pNext != nullptr)
			{
				current = current->pNext;
				current1 = current1->pNext;
			}
			current1->pNext = new Node(current->pNext->data, current1->pNext, current1);
			this->tail = current1->pNext;
		}
	}
}

void Keeper::pop_front()
{
	int si = this->Size;
	if (si)//Фикс исключения 1
	{
		Node* temp = head;
		head = head->pNext;//Исключение 1: попытка чтения поля пустого элемента
		delete temp;
		Size--;
	}
	else
	{
		cout << "Bad Input: cannot delete an element of an empty container" << endl;
		Sleep(1000);
	}
}

void Keeper::pop_back()
{
	int si = this->Size;
	if (si)//Фикс исключения 2
	{
		Node* temp = tail;
		tail = tail->pPrev;//Исключение 2: попытка чтения поля пустого элемента
		if (si > 1)
		{
			tail->pNext = nullptr;
			delete temp;
			Size--;
		}
		else
		{
			this->head = nullptr;
			this->Size = 0;
		}
	}
	else
	{
		cout << "Bad Input: cannot delete an element of an empty container" << endl;
		Sleep(1000);
	}
}

void Keeper::pop(int d)
{
	int si = this->Size;
	int i = 0;
	//if (si)
	
	if (d<0 || d>si - 1)
	{
		cout << "Incorrect range!" << endl;
		Sleep(1000);
	}	
	else if (d == 0)
		this->pop_front();
	else if (d == si - 1)
		this->pop_back();
	else
	{
		Node* temp = this->head;
		Node* tem1 = nullptr;
		while (i != d)
		{
			tem1 = temp;
			temp = temp->pNext;
			temp->pPrev=tem1;
			i++;
		}
		temp->pPrev->pNext = temp->pNext;
		temp->pNext->pPrev = temp->pPrev;
		delete temp;
		Size--;
	}
	
}

void Keeper::push_back(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
		tail = this->head;
	}
	else
	{
		Node* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data, current->pNext, current);
		tail = current->pNext;
	}
	Size++;
}

void Keeper::push_front(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
		tail = this->head;
	}
	else
	{
		Node* current = this->head;

		current->pPrev = new Node(data, current, current->pPrev);
		head = current->pPrev;
	}
	Size++;
}

void Keeper::push(int i, int d)
{
	int si = this->Size;
	int cnt = 0;
	if (i<0 || i> si)
	{
		cout << "Incorrect range!" << endl;
		Sleep(1000);
	}
	else if (i == 0)
		this->push_front(d);
	else if (i == si)
		this->push_back(d);
	else
	{
		
		Node* current = this->head;
		while (cnt != i-1)
		{
			current = current->pNext;
			cnt++;
		}
		Node* current1 = current->pNext;
		current->pNext = new Node(d, current->pNext, current);
		Size++;
	}
	
}

void Keeper::clear()
{
	while (Size)
	{
		pop_front();
	}
}


int Keeper::GetSize()
{
	return Size;
}

int Keeper::request_strt()
{
	int strt;
	cout << "Input container length: ";
	cin >> strt;
	return strt;
}

void Keeper::Spawn()
{
	int strt = request_strt();
	for (int i = 0; i < strt; i++)
	{
		push_back(rand() % 10);
	}
}

void Keeper::Spawn(int siz)
{
	int strt = siz;
	for (int i = 0; i < strt; i++)
	{
		push_back(rand() % 10);
	}
}

int& Keeper::operator[](const int index)
{
	int counter = 0;
	Node* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}

}

//void Keeper::operator()(Node* smallhead, int slot)
//{
//	int i = 0;
//	Node* current = this->head;
//	while (i != slot)
//		current->pNext;
//	current->Link = smallhead;
//}

void Keeper::Show()
{
	Node* current = this->head;
	if (current != nullptr)
	{
		while (current->pNext != nullptr)
		{
			cout << current->data << " ";
			current = current->pNext;
		}
		cout << current->data << " " << endl;
	}
	else
		cout << "The list is empty!!!" << endl;
}

//Node* Keeper::gethead()
//{
//	return this->head;
//}

Node::Node(int data, Node* pNext, Node* pPrev, Node* Link)
{
	this->data = data;
	this->pNext = pNext;
	this->pPrev = pPrev;
	this->Link = Link;
}

#include "Keeper.h"
#include<iostream>

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

void Keeper::part_show(int a, int b)
{
	Node* current = this->head;
	int tems = this->Size;
	if ((a < 0) || (b > Size) || (a > b))
	{
		cout << "Wrong" << endl;
	}
	else
	{
		for (int i = 0; i < Size; i++)
		{
			current = current->pNext;
			if (i < a)
			{
				pop_front();
				Size++;
			}
			else if (i == b - 1)
			{
				this->tail = current;
			}
			else if (i == Size - 1)
			{
				delete current;
			}
			else if ((i > b))
			{
				delete current->pPrev;
			}

		}
		tail->pNext = nullptr;
	}
	Show();
	this->Size = b - a + 1;
}

void Keeper::pop_front()
{
	Node* temp = head;
	head = head->pNext;

	delete temp;

	Size--;
}

void Keeper::pop_back()
{
	Node* temp = tail;
	tail = tail->pPrev;
	tail->pNext = nullptr;
	delete temp;

	Size--;
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

void Keeper::clear()
{
	while (Size)
	{
		pop_front();
	}
}

void Keeper::operator<(int val)
{
	for (int cnt = 0; cnt < this->Size; cnt++)
	{
		
	}
	cout << endl;
}

void Keeper::operator>(int val)
{
	for (int cnt = 0; cnt < this->Size; cnt++)
	{
		
	}
	cout << endl;
}

void Keeper::operator=(const Keeper& other)
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

void Keeper::operator()(int val1, int val2)
{
	part_show(val1, val2);
}


int Keeper::GetSize()
{
	return Size;
}

int Keeper::request_strt()
{
	int strt;
	cout << "Input length: ";
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

Node::Node(int data, Node* pNext, Node* pPrev)
{
	this->data = data;
	this->pNext = pNext;
	this->pPrev = pPrev;
}

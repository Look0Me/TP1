#pragma once
#include <iostream>
#include <string>
using namespace std;


class Node
{
public:
	Node* pNext;
	Node* pPrev;
	Node* Link;
	int data;
	Node(int data = int(), Node* pNext = nullptr, Node* pPrev = nullptr);
};

class Keeper
{
	friend void operator != (const Keeper& lis, int val);
	friend void operator == (const Keeper& lis, int val);
public:
	Keeper();
	explicit Keeper(int siz);
	~Keeper();
	Keeper(const Keeper& other);
	void part_show(int a, int b);
	void pop_front();
	void pop_back();
	void push_back(int data);
	void push_front(int data);
	void clear();
	void operator < (int val);
	void operator > (int val);
	void operator = (const Keeper& other);
	void operator () (int val1, int val2);
	int GetSize();
	int request_strt();
	void Spawn();
	void Spawn(int siz);
	int& operator[](const int index);
	void Show();
private:
	int Size;
	Node* head;
	Node* tail;
};

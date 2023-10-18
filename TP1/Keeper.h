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
	Node(int data = int(), Node* pNext = nullptr, Node* pPrev = nullptr, Node* Link = nullptr);
};

class Keeper
{
public:
	Keeper();
	explicit Keeper(int siz);
	~Keeper();
	Keeper(const Keeper& other);
	void pop_front();
	void pop_back();
	void pop(int d);
	void push_back(int data = rand() % 10);
	void push_front(int data = rand() % 10);
	void push(int i = 0, int d = rand()%10);
	void clear();
	int GetSize();
	int request_strt();
	void Spawn();
	void Spawn(int siz);
	int& operator[](const int index);/*
	void operator () (Node* smallhead, int slot);*/
	void Show();
	Node* gethead();
private:
	int Size;
	Node* head;
	Node* tail;
};

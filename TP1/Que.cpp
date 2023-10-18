#include "Que.h"

Que::Que()
{
	this->size = 0;
	Qu.Spawn(3);
	this->getsize();
}

Que::~Que()
{
	cout << "Queue cleared" << endl;
}

void Que::pop()
{
	this->Qu.pop_front();
}

void Que::popL()
{
	lis.pop();
}

void Que::popD()
{
	dec.pop();
}

void Que::popS()
{
	ste.pop();
}


void Que::push()
{
	this->Qu.push_back();
}

void Que::pushL(int d)
{
	lis.push(d);
}

void Que::pushD(int d)
{
	dec.push(d);
}

void Que::pushS(int d)
{
	ste.push(d);
}

int Que::getsize()
{
	this->size = this->Qu.GetSize();
	return size;
}

void Que::show()
{
	this->refresh();
	this->Qu.Show();
}

void Que::showL()
{
	lis.show();
}

void Que::showD()
{
	dec.show();
}

void Que::showS()
{
	ste.show();
}

void Que::exp()
{
	lis.exp();
	dec.exp();
	ste.exp();
}

void Que::imp()
{
	ifstream fin("2.txt");
	int data = 0,type = 0;
	string str;
	while(getline(fin,str))
	{
		if (str == "-1")
		{
			type = 1;
		}
		else if (str == "-2")
		{
			type = 2;
		}
		else if (str == "-3")
		{
			type = 3;
		}
		else
		{
			if (isNumeric(str))
				switch (type)
				{
				case 1:
					data = stoi(str);
					lis.push(data);
					break;
				case 2:
					data = stoi(str);
					dec.push(data);
					break;
				case 3:
					data = stoi(str);
					ste.push(data);
					break;
				}
		}
		//break;
	}
}

void Que::refresh()
{
	this->Qu[0] = lis.getsize();
	this->Qu[1] = dec.getsize();
	this->Qu[2] = ste.getsize();
}

bool Que::isNumeric(string const& str)
{
	auto it = str.begin();
	while (it != str.end() && isdigit(*it)) {
		it++;
	}
	return !str.empty() && it == str.end();
}

//Node& Que::getheadl()
//{
//	Node* h = lis.head();
//	return *h;
//}


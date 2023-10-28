#include "Que.h"

#include <list>
#include <iostream>
#define cles 1
using namespace std;

void menu();
void cls();
void men();
void disp();
void inc();
void imp();
void exp();


int main(void) 
{
	menu();
	return 0;
}

void menu()
{
	int choice = 0;
	int k = 0;
	men();
	Que abc;
	abc.show();
	while (choice != 6)
	{
		cin >> choice;
		cls();
		switch (choice)
		{
			case 1: //////////////////////////////Open list menu
			{
				k = 0;
				disp();
				abc.showL();
				while (k != 3)
				{
					cin >> k;
					switch (k)
					{
						case 1:////Add element
							cls();
							disp();
							abc.pushL();
							cls();
							disp();
							abc.showL();
							break;
						case 2://///Remove element
							cls();
							disp();
							abc.popL();
							cls();
							disp();
							abc.showL();
							break;
						case 3:///To main menu
							cls();
							men();
							abc.show();
							break;
						default:
							cls();
							disp(); 
							abc.showL();
							inc();
							break;
					}
				}
				break;
			}
			case 2: //////////////////////////////Open deck menu
			{
				k = 0;
				disp();
				abc.showD();
				while (k != 3)
				{
					cin >> k;
					switch (k)
					{
						case 1:////Add element
							cls();
							disp();
							cls();
							abc.pushD();
							cls();
							disp();
							abc.showD();
							break;
						case 2://///Remove element
							cls();
							disp();
							cls();
							abc.popD();
							cls();
							disp();
							abc.showD();
							break;
						case 3:///To main menu
							cls();
							men();
							abc.show();
							break;
						default:
							cls();
							disp();
							abc.showD();
							inc();
							break;
					}
				}
				break;
			}
			case 3://////////////////////////////Open steck menu
			{
				k = 0;
				disp();
				abc.showS();
				while (k != 3)
				{
					cin >> k;
					switch (k)
					{
						case 1:////Add element
							cls();
							disp();
							abc.pushS();
							cls();
							disp();
							abc.showS();
							break;
						case 2://///Remove element
							cls();
							disp();
							abc.popS();
							cls();
							disp();
							abc.showS();
							break;
						case 3:///To main menu
							cls();
							men();
							abc.show();
							break;
						default:
							cls();
							disp();
							abc.showS();
							inc();
							break;
					}
				}
				break;
			}
			case 4:
			{
				cls();
				men();
				abc.imp();
				abc.show();
				imp();
				break;
			}
			case 5:
			{
				cls();
				men();
				abc.show();
				abc.exp();
				exp();
				break;
			}
			case 6:
			{
				cls();
				break;
			}
			default:
			{
				cls();
				men();
				abc.show();
				inc();
				break;
			}
		}
	}
}

void men()
{
	cout << "Menu:\n(1)List\n(2)Deck\n(3)Stack\n(4)Import file\n(5)Export file\n(6)Exit" << endl << endl;
}

void disp()
{
	cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
}

void cls()
{
	if (cles)
		system("cls");
}

void elad()
{
	cout << "Element added!\n";
}

void elre()
{
	cout << "Element removed!\n";
}

void inc()
{
	cout << "Incorrect input!\n" << endl;
}

void imp()
{
	cout << "File imported!\n" << endl;
}

void exp()
{
	cout << "File exported!\n" << endl;
}


/* Author  Shruty Janakiraman
 A simple C++ program to illustrate the use of classes
 Simple program that enters takes in information of 5 items i.e their code and price.
 The total sum of the prices and the largest price is displayed*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>

class Item{
	
public:
	float largest();
	float sum();
	void display();
	int code[5];
	float price[5];

};
 
using namespace std;
float Item::largest()
{
	float large;
	int j = 0; 
	large = price[0];
	for (j = 1; j < 5; j++)
	{

		if (large < price[j])
		{
			large = price[j];
		}
	}
	return large;
}

float Item::sum()
{
	int add = 0;
	int j = 0;
	for (j = 0; j < 5; j++)
	{
		add = add + price[j];

	}
	return add;
}
void main()
{
	Item order;
	int i = 0;
    float  big;
	float total;
	for (i = 0; i < 5;i++)
	{ 
		std::cout << "enter the code of item:";
		std::cin >> order.code[i];
		std::cout << "\n enter the price:";
		std::cin >> order.price[i];
	}
	big = order.largest();
	total = order.sum();
	std::cout << "the largest price is:" << big;
	std::cout << " \n the total is :" << total;
	_getch();
	
}
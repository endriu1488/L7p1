#include <string>
#include <iostream>
#include "functii.h"

using namespace std;


void maj(std::string sin)
{
	int upper = 0;
	std::string::iterator it;
	for (it = sin.begin(); it != sin.end(); ++it)
		if (*it >= 'A' &&  *it <= 'Z')
		{
			upper++;
		}
		cout <<"Sunt "<< upper<<" majuscule" << endl;
	
	return ;
}

void nr(std::string sin)
{
	int nr = 0;
	std::string::iterator it;
	for (it = sin.begin(); it != sin.end(); ++it)
		if (*it >= '0' &&  *it <= '9')
		{
			nr++;
		}
	cout << "Sunt " << nr << " numere" << endl;


	return;
}

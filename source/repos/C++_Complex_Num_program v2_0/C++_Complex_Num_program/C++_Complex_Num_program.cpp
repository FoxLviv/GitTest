// C++_Complex_Num_program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


//#include <iostream>
#include "Complex.h"

using namespace std;


int main()
{
	cout << "work";
	Complex x;
	double eps,im,rp;
	std::cin >> im >> rp;
	std::cout << "xx";
	
	x.SetRP(rp);
	x.SetIP(im);
	std::cin >> eps;
	Complex l = rowSum(eps, x);

	//cout << x << std::endl;
	//cout << l;
	//cout << rowSum(eps,x);


    std::cout << "Hello World!\n"; 
	return 0;
}


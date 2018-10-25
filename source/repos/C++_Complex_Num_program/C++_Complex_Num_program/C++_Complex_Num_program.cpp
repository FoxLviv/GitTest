// C++_Complex_Num_program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Complex.h"

using namespace std;
Complex rowSum(double eps, Complex x)
{
	double a = 0.5;
	Complex sum;
	x = (x*x);
	x = x * a;
	sum = sum + x;
	sum = sum + rowSum(eps, x);

	return (x.GetRP() + x.GetIP() < eps) ? x : sum;
}
int main()
{
	Complex x;
	double eps,im,rp;
	std::cin >> im >> rp;
	
	x.SetRP(rp);
	x.SetIP(im);
	std::cin >> eps;
	Complex l = rowSum(eps, x);
	//cout << l;
	//std::cout << rowSum(eps,x);


    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


#pragma once
#include <iostream>


//#include "pch.h"


class Complex
{
//public:
	double realPart;
	double imaginaryPart;

public:
	Complex(double _RP = 0, double _IP = 0);
	~Complex();
	Complex(const Complex& c);




	double GetRP();
	void SetRP(double _RP);
	double GetIP();
	void SetIP(double _IM);

	
	
	Complex Abs();
	
	
	
	friend const Complex operator+(const Complex& left, const Complex& right) {
		return Complex(left.realPart + right.realPart, left.imaginaryPart + right.imaginaryPart);
	}

	friend const Complex operator*(const Complex& left, const double right) {
		return Complex(left.realPart * right, left.imaginaryPart * right);
	}

	
	Complex& operator=(Complex&that);
	
	
	
	
	friend const Complex operator*(const Complex& left, const Complex& right) {
		return Complex(left.realPart * right.realPart, left.imaginaryPart*right.imaginaryPart);
	}

	
	Complex& operator=(const Complex&that);
	

	friend std::ostream& operator << (std::ostream os,const Complex out) {
		os << out.realPart << " + " << out.imaginaryPart << "i\n";
		return os;
	};
	
	
};

Complex rowSum(double eps, Complex x)
{
	double a = 0.5;
	Complex sum;
	x = (x*x);
	x = x * a;
	sum = sum + x;
	sum = sum + rowSum(eps, x);
	
	return (x.GetRP()+x.GetIP()<eps)?x:sum;
}



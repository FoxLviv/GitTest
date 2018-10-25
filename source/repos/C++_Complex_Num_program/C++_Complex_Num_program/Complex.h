#pragma once
#include <iostream>




class Complex
{
//public:
	double realPart;
	double imaginaryPart;

public:
	Complex();
	~Complex();
	
	double GetRP();
	void SetRP(double _RP);
	double GetIP();
	void SetIP(double _IM);

	

	Complex Abs();
	Complex& operator+(Complex& that);
	Complex& operator-(Complex& that);
	Complex& operator*(Complex& that);
	Complex& operator*(double& that);
	//template<class T>
	//Complex& operator*(T& that);
	Complex& operator=(Complex&that);
	friend std::ostream& operator << (std::ostream os, Complex out);
	//friend Complex& operator+(double& that);
	
};

//Complex rowSum(double eps, Complex x)
//{
//	double a = 0.5;
//	Complex sum;
//	x = (x*x);
//	x = x * a;
//	sum = sum + x;
//	sum = sum + rowSum(eps, x);
//	
//	return (x.GetRP()+x.GetIP()<eps)?x:sum;
//}

//template<class T>
//inline Complex & Complex::operator*(T & that)
//{
//	this->realPart = this->realPart*that;
//	this->imaginaryPart = this->imaginaryPart*that;
//
//}

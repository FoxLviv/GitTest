
#include "pch.h"
#include "Complex.h"


Complex::Complex(double _RP=0,double _IP=0):realPart(_RP),imaginaryPart(_IP)
{
}


Complex::~Complex()
{
}

Complex::Complex(const Complex & c)
{
	realPart = c.realPart;
	imaginaryPart = c.imaginaryPart;
}

double Complex::GetRP()
{
	return realPart;
}

void Complex::SetRP(double _RP)
{
	realPart = _RP;
}

double Complex::GetIP()
{
	return imaginaryPart;
}

void Complex::SetIP(double _IM)
{
	imaginaryPart = _IM;
}

Complex Complex::Abs()
{
	
		Complex res;
		res.realPart = this->realPart >= 0 ? this->realPart : -1 * this->realPart;
		res.imaginaryPart == this->imaginaryPart >= 0 ? this->imaginaryPart : -1 * this->imaginaryPart;
		return res;

	
}


	

	

	Complex& Complex::operator=(const Complex & that)
	{
		this->imaginaryPart = that.imaginaryPart;
		this->realPart = that.realPart;
		return *this;
	}

	//friend std::ostream& Complex::operator<<(std::ostream& os, Complex& out)
	//{
	//	os << out.realPart << " + " << out.imaginaryPart << "i\n";
	//	return os;
	//}

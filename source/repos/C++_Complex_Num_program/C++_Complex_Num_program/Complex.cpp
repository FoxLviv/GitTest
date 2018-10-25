#include "pch.h"
#include "Complex.h"


Complex::Complex()
{
}


Complex::~Complex()
{
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

Complex & Complex::operator+(Complex & that)
{
	Complex res;
	res.realPart = this->realPart + that.realPart;
	res.imaginaryPart = this->imaginaryPart + that.imaginaryPart;
	//res.SetRP(this->GetRP() + that.GetRP);
	//res.SetIP(this->GetIP() + that.GetIP);
	return res;
}

//Complex&  operator+(const Complex & that)
//{
//	Complex res;
//	res.realPart = this->realPart + that.realPart;
//	res.SetRP(this->GetRP() + that.GetRP);
//	res.SetIP(this->GetIP() + that.GetIP);
//	return res;
//}

	Complex & Complex::operator-(Complex & that)
{
	Complex res;
	res.SetRP(this->GetRP() - that.GetRP);
	res.SetIP(this->GetIP() - that.GetIP);
	return res;
}

	Complex & Complex::operator*(Complex & that)
	{
		Complex res;
		res.realPart = this->realPart*that.realPart - (this->imaginaryPart + that.imaginaryPart);
		res.imaginaryPart = this->realPart*that.imaginaryPart + this->imaginaryPart*that.realPart;
		return res;




	}

	Complex & Complex::operator*(double & that)
	{
		Complex res;
		res.imaginaryPart=this->imaginaryPart*that;
		res.realPart = this->realPart*that;
		return res;
	}

	Complex & Complex::operator=(Complex & that)
	{
		this->imaginaryPart = that.imaginaryPart;
		this->realPart = that.realPart;
	}

	std::ostream & operator<<(std::ostream os, Complex out)
	{
		os << out.realPart << " + " << out.imaginaryPart << "i\n";
		return os;
	}

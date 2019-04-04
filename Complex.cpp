// Complex.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Complex.h"




Complex & operator+(Complex & a, Complex & b)
{
	// TODO: вставьте здесь оператор return
	Complex c;
	c.setRe(a.getRe() + b.getRe());
	c.setIm(a.getIm() + b.getIm());
	return c;
}

Complex operator+(Complex a, double b)
{
	Complex c;
	c.setRe(a.getRe() + b);
	c.setIm(a.getIm());
	return c;
}

Complex operator+(double b, Complex a)
{
	Complex c;
	c.setRe(a.getRe() + b);
	c.setIm(a.getIm());
	return c;
}

Complex & operator-(Complex & a, Complex & b)
{
	Complex c;
	c.setRe(a.getRe() - b.getRe());
	c.setIm(a.getIm() - b.getIm());
	return c;
}

Complex operator-(Complex a, double b)
{
	Complex c;
	c.setRe(a.getRe() - b);
	c.setIm(a.getIm());
	return c;
}

Complex operator-(double b, Complex a)
{
	Complex c;
	c.setRe(a.getRe() - b);
	c.setIm(a.getIm());
	return c;
}

Complex & operator*(Complex & a, Complex & b)
{
	// TODO: вставьте здесь оператор return
	Complex c;
	c.setRe(a.getRe()*b.getRe() - (a.getIm()*b.getIm()));
	c.setIm(a.getRe()*b.getIm() + b.getRe()*a.getIm());
	return c;
}

Complex operator*(Complex a, double b)
{
	Complex c;
	c.setRe(a.getRe()*b);
	c.setIm(a.getIm()*b);
	return  c;
}

Complex operator*(double b, Complex a)
{
	Complex c;
	c.setRe(a.getRe()*b);
	c.setIm(a.getIm()*b);
	return  c;
}

istream & operator>>(istream& o, Complex& complex)
{
	// TODO: вставьте здесь оператор return
	double a, b;
	o >> a >> b;
	complex.setRe(a);
	complex.setIm(b);

	return o;
}

ostream & operator<<(ostream& o, Complex& b)
{
	// TODO: вставьте здесь оператор return
	o << "Re=" << b.getRe() << " Im=" << b.getIm()<<"\n";
	return o;
}



Complex::Complex(double initRe,double initIm)
{
	Re = initRe;
	Im = initIm;

}

Complex::~Complex()
{
	cout << "Destructor on work!!!\n";
}

double Complex::getIm()
{
	return Im;
}

double Complex::getRe()
{
	return Re;
}

int Complex::setRe(double newVal)
{
	Re = newVal;
	return 1;
}

int Complex::setIm(double newVal)
{
	Im = newVal;
	return 1;
}

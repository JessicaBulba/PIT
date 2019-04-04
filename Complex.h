#pragma once
using namespace std;
#include <iostream>

class Complex
{
public:
	
	Complex(double initRe = 0, double initIm = 0);
	~Complex();
	// operatory +
	friend Complex& operator+(Complex& a, Complex& b);
	friend Complex operator+(Complex a, double b);
	friend Complex operator+(double b, Complex a);
	//operatory -
	friend Complex& operator-(Complex& a, Complex& b);
	friend Complex operator-(Complex a, double b);
	friend Complex operator-(double b, Complex a);
	//operatory *
	friend Complex& operator*(Complex& a, Complex& b);
	friend Complex operator*(Complex a, double b);
	friend Complex operator*(double b, Complex a);
	// in&out strreams
	friend istream& operator>> (istream& o, Complex& b);
	friend ostream& operator<< (ostream& o, Complex& b);
	// getters&setters
	double getIm();
	double getRe();
	int setRe(double newVal);
	int setIm(double newVal);

	
private:
	double Re;
	double Im;

};



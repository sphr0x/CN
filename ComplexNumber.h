#pragma once
#include <string>
#include <iostream>

class ComplexNumber										// 1 a) | declare class in HEADER - 1 header per class !!!
{


public:													// public: declare functions

	std::string toString();								// 1 b)
	std::string toString2();
	void setComplex(float r, float i);					// 3 c) ->..
	/*
	std::string getRe();
	std::string getIm();
	*/
	ComplexNumber copyNum(const ComplexNumber& cinNum);
	ComplexNumber add2Num(const ComplexNumber& cinNum);	// ..-> 3 c)
	ComplexNumber inPolar(const ComplexNumber& cinNum);	// 6 a)
	ComplexNumber inKart(ComplexNumber cinNum);	// 6 a)

	ComplexNumber(float re = 0.0, float im = 1.0);		// constructor: init vari
	~ComplexNumber();									// destructor: release disc space

private:												// private: all m_vari
								
	float m_real;
	float m_imag;
	float m_r;
	float m_phi;
};
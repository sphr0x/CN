#pragma once
#include "ComplexNumber.h"
#include <iostream>

class UI													// 4 a)
{
public:
	void printComplex(ComplexNumber Print);					// 4 a)
	void printComplexPolar(ComplexNumber Print);			// optional - print trigonometric number
	ComplexNumber getComplex();								// 4 a)
	UI();
	~UI();
private:
    ComplexNumber getComplexTrigonometric();
};


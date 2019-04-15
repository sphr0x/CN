#pragma once
#include "ComplexNumber.h"
#include <iostream>
#include <string>

class UI													// 4 a)
{
public:

	void printComplex(ComplexNumber Print);
	void printComplexPolar(ComplexNumber Print);

	ComplexNumber getComplex();

	UI();
	~UI();

private:

};


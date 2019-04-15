#include "pch.h"
#include "UI.h"
#include "ComplexNumber.h"
#include <iostream>

void UI::printComplex(ComplexNumber Print) {									// 4 a) ->..
	std::cout << Print.toString() << std::endl;
}

void UI::printComplexPolar(ComplexNumber Print) {
	std::cout << Print.toString2() << std::endl;
}

ComplexNumber UI::getComplex() {
	ComplexNumber rPrint;
	float r, i;

	std::cout << "bitte realteil und danach imaginaerteil eingeben:" << std::endl;
	std::cin >> r >> i;
	rPrint.setComplex(r, i);
	return rPrint;
}

UI::UI()																		// ..-> 4 a)
{
}


UI::~UI()																				
{
}

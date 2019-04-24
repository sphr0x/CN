#include "pch.h"
#include "UI.h"
#include "ComplexNumber.h"
#include <iostream>

void UI::printComplex(ComplexNumber Print) {                                    
    std::cout << Print.toString() << std::endl;
}
void UI::printComplexPolar(ComplexNumber Print) {
    std::cout << Print.toStringPolar() << std::endl;
}

ComplexNumber UI::getComplex() {
    float r, i;
    std::cout << "Bitte Realteil und danach Imaginaerteil eingeben:" << std::endl;
    std::cin >> r >> i;
    return ComplexNumber(r, i);
}
ComplexNumber UI::getComplexTrigonometric() {
    float r, phi;
    std::cout << "Bitte r(Laenge) und danach phi(Winkel) eingeben:" << std::endl;
    std::cin >> r >> phi;
    return ComplexNumber::fromTrigonometric(r, phi);
}

UI::UI()                                                                        
{
}


UI::~UI() {
}

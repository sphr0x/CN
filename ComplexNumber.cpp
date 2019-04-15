#include "pch.h"
#include <iostream>
#include "ComplexNumber.h"
#include <math.h>

/*	implement code of member_function in cpp file !! */

std::string ComplexNumber::toString() {										// 1 b)
	return std::to_string(m_real) + ", " + std::to_string(m_imag) + " i";
}

std::string ComplexNumber::toString2() {
	return std::to_string(m_r) + " * e^i*" + std::to_string(m_phi);
}

void ComplexNumber::setComplex(float r,float i) {							// 3 c) ->..
	m_real = r;
	m_imag = i;
}

/*
std::string ComplexNumber::getRe() {												
	return std::to_string(m_real);
}
std::string ComplexNumber::getIm() {
	return std::to_string(m_imag);
}
*/

ComplexNumber ComplexNumber::copyNum(const ComplexNumber& cinNum) {
	ComplexNumber input;
	input.m_real = cinNum.m_real;
	input.m_imag = cinNum.m_imag;
	return input;
}

ComplexNumber ComplexNumber::add2Num(const ComplexNumber& cinNum) {				// ..-> 3 c)
	ComplexNumber cResult;
	cResult.m_real = this->m_real + cinNum.m_real;
	cResult.m_imag = this->m_imag + cinNum.m_imag;
	return cResult;
}

ComplexNumber ComplexNumber::inPolar(const ComplexNumber& cinNum) {
	ComplexNumber cPol = cinNum;
	cPol.m_r = sqrt((cPol.m_real*cPol.m_real) + (cPol.m_imag * cPol.m_imag));
	cPol.m_phi = atan2(cPol.m_imag, cPol.m_real);
	// std::cout << "Komplexe Zahl in Polarform: " << cPol.m_r << " * e^i*" << cPol.m_phi << std::endl;
	return cPol;
}

ComplexNumber ComplexNumber::inKart(ComplexNumber cinNum) {
	ComplexNumber cKart;
	cKart.m_real = cinNum.m_r*(cos(cinNum.m_phi));
	cKart.m_imag = cinNum.m_r*(sin(cinNum.m_phi));
	// std::cout << "Komplexe Zahl in kartesischer Form: " << cKart.m_real << ", " << cKart.m_imag << " i" << std::endl;
	return cKart;
}

/* constructor for initialisation of member_vari -> */

ComplexNumber::ComplexNumber(float re, float im)
	: m_real(re), m_imag(im) {

	float m_r = sqrt(m_real*m_real + m_imag * m_imag);
	float m_phi = atan2(m_imag, m_real);
}

/* destructor to release disc space */

ComplexNumber::~ComplexNumber()
{
}
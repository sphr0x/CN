#include "pch.h"
#include <iostream>
#include "ComplexNumber.h"
#include <math.h>

/* implement code of member_function in cpp file */

void ComplexNumber::updateTrigonometric() {
	m_r = sqrt((m_real * m_real) + (m_imag * m_imag));
	m_phi = atan2(m_imag, m_real);
}
void ComplexNumber::updateCartesian() {
	m_real = m_r * (cos(m_phi));
	m_imag = m_r * (sin(m_phi));
}
std::string ComplexNumber::toString() {											
    return std::to_string(m_real) + ", " + std::to_string(m_imag) + " i";
}
std::string ComplexNumber::toStringPolar() {									
    return std::to_string(m_r) + " * e^i*" + std::to_string(m_phi);
}
float ComplexNumber::getReal() const {
    return m_real;
}
void ComplexNumber::setReal(float mReal) {
    m_real = mReal;
    updateTrigonometric();
}
float ComplexNumber::getImag() const {
    return m_imag;
}
void ComplexNumber::setImag(float mImag) {
    m_imag = mImag;
    updateTrigonometric();
}
float ComplexNumber::getR() const {
    return m_r;
}
void ComplexNumber::setR(float mR) {
    m_r = mR;
    updateCartesian();
}
float ComplexNumber::getPhi() const {
    return m_phi;
}
void ComplexNumber::setPhi(float mPhi) {
    m_phi = mPhi;
    updateCartesian();
}
/* c (Result) = a (this object) + b (cinNum) */
ComplexNumber ComplexNumber::add(const ComplexNumber &cinNum) const {                
    return ComplexNumber(cinNum.m_real + m_real, cinNum.m_imag + m_imag);
}
/* constructor for initialisation of m_variables -> */
ComplexNumber::ComplexNumber(const float re, const float im)						
: m_real(re), m_imag(im) {
	updateTrigonometric();
}
/* copy-constructor */
ComplexNumber::ComplexNumber(const ComplexNumber &com)								
: m_real(com.m_real), m_imag(com.m_imag), m_r(com.m_r),m_phi(com.m_phi) {
}

ComplexNumber::~ComplexNumber() = default;
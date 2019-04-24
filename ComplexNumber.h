#pragma once
#include <string>
#include <iostream>

/*	declare class in HEADER - 1 header per class */

class ComplexNumber													// 1 a) 
{
private:
    float m_real;
    float m_imag;
    float m_r;
    float m_phi;

    void updateTrigonometric();										// 6 a)
    void updateCartesian();											// 6 a)
public:                                                    
    std::string toString();											// 1 b)
    std::string toStringPolar();									// optional - print trigonomic number
    explicit ComplexNumber(float re = 0.0, float im = 0.0);			// 3 c) constructor
	~ComplexNumber();												//		destructor
    ComplexNumber(const ComplexNumber& com);						// 3 c) copy-constructor
	ComplexNumber add(const ComplexNumber& cinNum) const;			// 3 c)

    float getReal() const;											// 3 c)
    void setReal(float mReal);
    float getImag() const;											// 3 c)
	void setImag(float mImag);
    float getR() const;												// 3 c)
	void setR(float mR);
    float getPhi() const;											// 3 c)
	void setPhi(float mPhi);

    static ComplexNumber fromTrigonometric(float r, float phi) {	// optional - get from trigonomic number
        ComplexNumber result;
        result.m_r = r;
        result.m_phi = phi;
        result.updateCartesian();
        return result;
    }
};
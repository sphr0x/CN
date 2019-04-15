#include "pch.h"
#include <iostream>
#include "ComplexNumber.h"
#include "UI.h"

int main()
{
	ComplexNumber cNum1;												// 1 b) 
	ComplexNumber cNum2;												// 3 c) + 4 b) ->..
	const ComplexNumber& rC2 = cNum2;
	ComplexNumber cResult;
	const ComplexNumber& rCe = cResult;
	UI getC1,getC2,getC3,getCopy,getPolar,getKart;															
	ComplexNumber copy;
	ComplexNumber polar,kart;
	// float Num1, Num2;		

	cNum1 = getC1.getComplex();											// UI get CN
	cNum2 = getC2.getComplex();

	/*			==
	std::cin >> Num1 >> Num2;					
	cNum2.setComplex(Num1, Num2);
	*/
	cResult = cNum1.add2Num(rC2);										
	
	getC2.printComplex(cNum2);											// UI print CNs
	getC1.printComplex(cNum1);
	getC3.printComplex(cResult);
	/*			==
	std::cout << cNum2.toString() << " + " << cNum1.toString() << " = " << cResult.toString() << std::endl;
	*/
	copy = cNum2.copyNum(rC2);	

	getCopy.printComplex(copy);											// UI print CN COPY
	/*			==
	std::cout << copy.toString() << std::endl;
	*/
																		// ..-> 3 c) +  4 b)
	/*	printComplex uses tostring()
	std::cout << cNum1.toString() << std::endl;							// 1 b)
	*/

	polar=polar.inPolar(rCe);											// test 6 a) iO
	getPolar.printComplexPolar(polar);									// UI print CN POLAR
	
	kart=kart.inKart(polar);											// test 6 a) iO
	getKart.printComplex(kart);											// UI print CN KART
}

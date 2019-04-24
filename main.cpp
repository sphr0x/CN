#include "pch.h"
#include <iostream>
#include "ComplexNumber.h"
#include "UI.h"

		/* ### C23 – Laborübung 1 - Komplexe Zahlen sollen als Objekte realisiert werden. ### */

int main() {
    ComplexNumber cNum1 = ComplexNumber(2,5);							// 1 b)
    ComplexNumber cNum2 = ComplexNumber(2,-1);							// 3 c) set value
    const ComplexNumber &rC2 = cNum2;
    ComplexNumber cResult;
    UI ui;
	
	ui.printComplex(cNum1);												// 4 b) print value
	cNum1 = ui.getComplex();											// 4 b) set value UI
    cResult = cNum1.add(cNum2);											// 3 c) add 2 numbers
	ui.printComplex(cResult);											// 4 b)
	cResult = ComplexNumber(rC2);										// 3 c) copy number
	ui.printComplex(cResult);											// 4 b)
	cResult = ui.getComplex();											// 6 a)
    ui.printComplexPolar(cResult);
    ui.printComplex(cResult);
	return 0;
}
		
void inPolar(ComplexNumber p) {
	float re = p.getReal();
	float im = p.getImag();
	p.setReal(re);
	p.setImag(im);
}
void inKart(ComplexNumber p) {
	float r = p.getR();
	float phi = p.getPhi();
	p.setR(r);
	p.setPhi(phi);
}

/*						### 6 b) - Begruendung des Ortes der Implementierung ###

	Obwohl beide Varianten nutzbar sind, ist es sinnvoll die Erweiterung in der ComplexNumber-Klasse zu 
	implementieren, da die Verkapselung/Struktur des Programms weiterhin vollstaendig ist und das 
	Hauptprogramm nicht unuebersichtlich wird. Das zusaetzliche Auslesen und Einlesen von private 
	Membervariablen ueber Floatvariablen in der main.cpp implementierten Funktionen ist umstaendlich 
	und nicht Sinn und Zweck der objektorientieren Programmierung.

*/
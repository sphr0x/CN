#include "pch.h"
#include <iostream>
#include "ComplexNumber.h"
#include "UI.h"

		/* ### C23 – Laborübung 1 - Komplexe Zahlen sollen als Objekte realisiert werden. ### */

void inPolar(ComplexNumber p) {											// 6 a)
	std::cout << p.toString() << " in trigonometrischer Form:";
	float re = p.getReal();
	float im = p.getImag();
	float r = sqrt((re * re) + (im * im));
	float phi = atan2(im, re);
	p.setR(r);
	p.setPhi(phi);
	std::cout << p.toStringPolar() << std::endl;
}
void inKart(ComplexNumber p) {
	std::cout << p.toString() << " in kartesischer Form:";
	float r = p.getR();
	float phi = p.getPhi();
	float re = r * (cos(phi));
	float im = r * (sin(phi));
	p.setR(re);
	p.setPhi(im);
	std::cout << p.toString() << std::endl;
}

int main() {
    ComplexNumber cNum1 = ComplexNumber(2,5);							
    ComplexNumber cNum2 = ComplexNumber(2,-1);							// 3 c) set value
    const ComplexNumber &rC2 = cNum2;
    ComplexNumber cResult;
    UI ui;
	
	cNum1 = ui.getComplex();											// 4 b) set value UI
    cResult = cNum1.add(cNum2);											// 3 c) 
	std::cout << " + " << std::endl;
	ui.printComplex(cNum1);												// 4 b) print value
	std::cout << " Ergebnis der Addition:" << std::endl;
	ui.printComplex(cResult);																			
	cResult = ComplexNumber(rC2);										// 3 c) 
	std::cout << " Ergebnis der Kopie:" << std::endl;
	ui.printComplex(cResult);											// 4 b)
	cResult = ui.getComplex();											// 6 a)
	std::cout << " Umwandlung via Memberfunktionen:" << std::endl;
    ui.printComplexPolar(cResult);
    ui.printComplex(cResult);
	std::cout << " Umwandlung via Fkt. im Hauptprogramm:" << std::endl;
	inPolar(cNum1);														// 6 a)
	inKart(cNum1);
	return 0;
}

/*						### 6 b) - Begruendung des Ortes der Implementierung ###

	Obwohl beide Varianten nutzbar sind, ist es sinnvoll die Erweiterung in der ComplexNumber-Klasse zu 
	implementieren, da die Verkapselung/Struktur des Programms weiterhin vollstaendig ist und das 
	Hauptprogramm nicht unuebersichtlich wird. Das zusaetzliche Auslesen und Einlesen von privaten 
	Membervariablen ueber Floatvariablen in der main.cpp implementierten Funktionen ist umstaendlich 
	und nicht Sinn und Zweck der objektorientieren Programmierung.

*/
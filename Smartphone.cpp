#include "Smartphone.h"



string Smartphone::stato()
{
	if (acceso) {
		return "Smartphone " + marca + modello + ": acceso\n";
	}
	else {
		return "Smartphone " + marca + modello + ": spento\n";
	}
}

void Smartphone::mostraInfo(){
	cout << endl << "Numero di serie: " << nSerie << endl;
	cout << endl << "Marca: " << marca << endl;
	cout << endl << "Modello: " << modello << endl;
	cout << endl << "OS: " << OS << endl;
	cout << endl << "Dimensione schermo: " << dimSchermo << endl;

}
void Smartphone::setDim(string newDim) {
	dimSchermo = newDim;

}

void Smartphone::setOS(string newOS) {

	OS = newOS;
}

string Smartphone::getDim()
{
	return dimSchermo;
}

string Smartphone::getOS() {
	return OS;
}


void Smartphone::descrizione() {
	cout << endl << "Telefono cellulare Smartphone  " << marca << " " << modello << " con sistema operativo " << OS << "." << endl;
}


void Smartphone::pulisciCache() {

	cout << endl << "Cache svuotata con successo" << endl;
}
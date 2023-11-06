#include "DispositivoElettronico.h"

void DispositivoElettronico::setNserie(string newNSerie)
{
	nSerie = newNSerie;
}

void DispositivoElettronico::setMarca(string newMarca) {
	marca = newMarca;
}

void DispositivoElettronico::setModello(string newModello) {

	modello = newModello;
}

string DispositivoElettronico::getNSerie()
{
	return nSerie;
}

string DispositivoElettronico::getMarca()
{
	return marca;
}

string DispositivoElettronico::getModello()
{
	return modello;
}

 void  DispositivoElettronico::accendi()
{
	acceso = true;
	cout <<endl<< "Il dispositivo" << marca << " " << modello << " è stato acceso." << endl;
}

 void DispositivoElettronico::spegni() {
	 acceso = false;
	 cout <<endl<< "Il dispositivo" << marca <<" "<< modello << " è stato spento." << endl;
}

 void DispositivoElettronico::descrizione()
 {
	 cout << endl << "Dispositivo Elettronico generico" << endl;
 }

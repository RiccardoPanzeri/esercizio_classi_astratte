#include "Laptop.h"

void Laptop::setRam(string newRam)
{
	RAM = newRam;
}

void Laptop::setGpu(string newGpu)
{
	GPU = newGpu;
}

void Laptop::setCpu(string newCpu)
{
	CPU = newCpu;
}

string Laptop::getRam()
{
	return RAM;
}

string Laptop::getGpu()
{
	return GPU;
}

string Laptop::getCpu()
{
	return CPU;
}

void Laptop::InstallaAntivirus()
{
	cout << endl << "Antivirus installato con successo" << endl;
}

void Laptop::descrizione()
{
	cout << endl << "Laptop  " << marca << " " << modello << " con " << RAM << " di Ram." << endl;
}

string Laptop::stato()
{
	if (acceso) {
		return "Laptop " + marca + modello + ": acceso\n";
	}
	else {
		return "Laptop " + marca + modello + ": spento\n";
	}
}


void Laptop::mostraInfo() {
	cout << endl << "Numero di serie: " << nSerie << endl;
	cout << endl << "Marca: " << marca << endl;
	cout << endl << "Modello: " << modello << endl;
	cout << endl << "RAM: " << RAM << endl;
	cout << endl << "GPU: " << GPU << endl;
	cout << endl << "CPU: " << CPU << endl;
}
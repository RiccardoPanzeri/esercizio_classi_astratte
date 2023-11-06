#include "TV.h"

void TV::setCanali(string newCanali)
{
	numeroCanali = newCanali;
}

void TV::aggiungiCanale(string canale) {
	canaliPreferiti.push_back(canale);
	cout << endl<<"Canale inserito correttamente" << endl;
}


void TV::rimuoviCanale(string canale) {
	canaliPreferiti.remove(canale);
	cout << endl << "Canale rimosso correttamente" << endl;

}

void TV::rimuoviUltimo() {
	canaliPreferiti.pop_back();
	cout << endl << "Canale rimosso correttamente" << endl;
}

void TV::mostraInfo() {
	cout << endl << "Marca: " << marca << endl;
	cout << endl << "Modello: " << modello << endl;
	cout << endl << "N serie: " << nSerie << endl;
	cout << endl << "Tipologia: Televisore"  << endl;
	cout << endl << "N Canali: " << numeroCanali << endl;

}


string TV::getCanali() {

	return numeroCanali;
}


void TV::visualizzaPreferiti() {
	cout << endl << "Ecco la lista attuale dei canali preferiti:" << endl;
	list<string>::iterator it;
	for (it = canaliPreferiti.begin(); it != canaliPreferiti.end(); it++) {
		cout << endl << *it << endl;
	}
}


string TV::stato() {

	if (acceso) {
		return marca + modello + ": acceso\n";
	}
	else {
		return marca + modello + ": spento\n";

	}
}


void TV::descrizione() {
	cout << endl << "Televisore " << marca << " " << modello << " con " << numeroCanali << " canali" << endl;
}
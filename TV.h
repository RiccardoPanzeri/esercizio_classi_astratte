#pragma once
#include "DispositivoElettronico.h"


class TV : public DispositivoElettronico
{
private:
	string numeroCanali;
	list<string> canaliPreferiti;


public:
	//costruttore:
	TV(string newSerie, string newMarca, string newModello, string nCanali) : DispositivoElettronico(newSerie, newMarca, newModello), numeroCanali(nCanali) {};

	
	


	//metodi propri:
	void setCanali(string newCanali);
	string getCanali();
	void visualizzaPreferiti();
	void aggiungiCanale(string newCanale);
	void rimuoviCanale(string canale);
	void rimuoviUltimo();

	//metodi virtual sovrascritti:
	void descrizione() override;

	//metodi puri sovrascritti:
	string stato() override;
	void mostraInfo() override;
};


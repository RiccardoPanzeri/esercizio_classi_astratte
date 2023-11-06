#pragma once
#include "DispositivoElettronico.h"
class Smartphone : public DispositivoElettronico
{
private:
	string dimSchermo;
	string OS;





public:
	//metodi propri della classe figlio:
	Smartphone(string newSerie, string newMarca, string newModello, string newDim, string newOS) : DispositivoElettronico(newSerie, newMarca, newModello), dimSchermo(newDim), OS(newOS)  {};
	void setDim(string newdim);
	void setOS(string newOS);
	string getOS();
	string getDim();
	void pulisciCache();
	//metodo virtual sovrascritto:
	void descrizione() override;
	//metodo puro sovrascritto:
	string stato() override;
	void mostraInfo() override;
};


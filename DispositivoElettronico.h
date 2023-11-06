#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;



class DispositivoElettronico
{
protected:
	string nSerie;
	string marca;
	string modello;
	bool acceso;


public:
	DispositivoElettronico(string newSerie, string newMarca, string newModello) : nSerie(newSerie), marca(newMarca), modello(newModello), acceso(false) {};
	//setter
	void setNserie(string newNSerie);
	void setMarca(string newMarca);
	void setModello(string newModello);
	//getter 
	string getNSerie();
	string getMarca();
	string getModello();
	


	//metodi normali
	void  accendi();
	void  spegni();

	


	//metodo virtual
	void virtual descrizione();

	//metodi puri
	string virtual stato() = 0;
	void virtual mostraInfo() = 0;

	





};


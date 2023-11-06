#pragma once
#include "DispositivoElettronico.h"
class Laptop : public DispositivoElettronico
{




private:
	string RAM;
	string GPU;
	string CPU;

public:
	//costruttore:
	Laptop(string newSerie, string newMarca, string newModello, string newRam, string newGpu, string newCpu) : DispositivoElettronico(newSerie, newMarca, newModello), RAM(newRam), GPU(newGpu), CPU(newCpu) {};
	//metodi propri:
	void setRam(string newRam);
	void setGpu(string newGpu);
	void setCpu(string newCpu);
	string getRam();
	string getGpu();
	string getCpu();
	void InstallaAntivirus();

	//metodo virtual sovrascritto:
	void descrizione() override;

	//metodi puri sovrascritti
	string stato() override;
	void mostraInfo() override;


};


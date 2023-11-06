#include "DispositivoElettronico.h"
#include "Smartphone.h"
#include "TV.h"
#include "Laptop.h"


int main()
{
	//dimostro il funzionamento del polimorfismo e dei metodivirtual e puri con tutte e tre le sottoclassi della classe padre:
	
	//classe TV
	
	DispositivoElettronico* dispositivo = new TV("Z12342", "Samsung", "QLED Q90T", "980");
	dispositivo->descrizione(); // richiamo il metodo virtual della classe padre;
	dispositivo->accendi(); // richiamo un metodo normale della classe padre;
	dispositivo->mostraInfo(); // richiamo uno dei metodi puri della classe padre;
	
	//effettuo un casting dinamico per poter utilizzare i metodi prorpi della classe figlio:
	if (dynamic_cast<TV*>(dispositivo) != nullptr) { //effettuo un controllo: se il casting non avvenisse i maniera corretta, restituirà un puntatore nullo;
		dynamic_cast<TV*>(dispositivo)->aggiungiCanale("127");//se il casting avviene correttamente, il metodo della classe figlio viene richimato con successo 
		dynamic_cast<TV*>(dispositivo)->aggiungiCanale("124");
		dynamic_cast<TV*>(dispositivo)->aggiungiCanale("111");
		dynamic_cast<TV*>(dispositivo)->rimuoviCanale("111");
		dynamic_cast<TV*>(dispositivo)->visualizzaPreferiti();

	}

	cout << "--------------------------------------------------" << endl;

	//classe Smartphone:
	dispositivo = new Smartphone("B1837", "Samsung", "Galaxy-xzy", " 2560 x 1440 pixel", "Andorid");
	dispositivo->descrizione(); // richiamo il metodo virtual della classe padre;
	dispositivo->spegni(); // richiamo un metodo normale della classe padre;
	dispositivo->mostraInfo(); // richiamo uno dei metodi puri della classe padre;

	if (dynamic_cast<Smartphone*>(dispositivo) != nullptr) {
		dynamic_cast<Smartphone*>(dispositivo)->pulisciCache();
	}


	cout << "---------------------------------------------------- " << endl;


	//classe Laptop:
	dispositivo = new Laptop("E2943", "Lenovo", "ThinkPad X1 Carbon", "32GB", "Nvidia 1050-Ti", "Intel I7");
	dispositivo->descrizione(); // richiamo il metodo virtual della classe padre;
	dispositivo->accendi(); // richiamo un metodo normale della classe padre;
	dispositivo->mostraInfo(); // richiamo uno dei metodi puri della classe padre;

	if (dynamic_cast<Laptop*>(dispositivo) != nullptr) {
		dynamic_cast<Laptop*>(dispositivo)->InstallaAntivirus();
	}

	delete dispositivo;

	
	
   
}


#ifndef COFRE_H
#define COFRE_H

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Item.h"

class Cofre {
private:
	Item* const elemento;
	bool abierto = false;

public:

	bool EstaAbierto() {
		if (abierto == false) {
			Abrir();
			abierto = true;
		}

		else if (abierto == true) {
			std::cout << "Este cofre ya ha sido abierto" << "\n";
			abierto = true;
		}
		return abierto;
	}

	const Item* Abrir() {
		

		srand(time(nullptr));
		int num = rand();
		num = rand() % 4;
		
		if (num == 0) {
			Item* O = new Item("Oro");
			return O;
		}

		else if (num == 1) {
			Item* Dia = new Item("Diamante");
			return Dia;
		}

		else if (num == 2) {
			Item* D = new Item("Daga");
			return D;
		}

		else if (num == 3) {
			Item* L = new Item("Lanza");
			return L;
		}
	}
};

#endif // !COFRE_H

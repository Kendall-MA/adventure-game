#ifndef COFRE_H
#define COFRE_H

#include "Item.h"

class Cofre {
private:
	Item* const elemento;
	bool abierto;

public:
	bool EstaAbierto();
	const Item* Abrir();
};

#endif // !COFRE_H
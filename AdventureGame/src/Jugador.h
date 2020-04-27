#ifndef JUGADOR_H
#define JUGADOR_H

#include "Cuarto.h"

class Jugador {
private:
	std::string nombre;
	const Cuarto* cuarto_actual;
	std::vector<Item*> items;

public:
	Jugador();

	void SetNombreJugador(std::string);
	void SetCuartoActual(const Cuarto*);
	std::string GetNombreJugador() const;
	const Cuarto* GetCuartoActual() const;
	void AgregarItem(const Item*);
	bool EstaArmado();

};

#endif // !JUGADOR_H
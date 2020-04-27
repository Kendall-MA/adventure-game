#ifndef JUEGO_H
#define JUEGO_H

#include <istream>

#include "Cuarto.h"
#include "Jugador.h"
#include "OpcionMovimiento.h"

class Juego {
private:
	std::array<Cuarto, 4> cuartos;		// El tamaño de los arrays posiblemente se tiene que cambiar
	Jugador personaje;
	std::array<Opcion*, 4> opciones_menu;
	OpcionMovimiento mov_arriba;
	OpcionMovimiento mov_abajo;
	OpcionMovimiento mov_izquierda;
	OpcionMovimiento mov_derecha;
	OpcionMovimiento opc_salir;

public:
	Juego();

	void Run();
	void InicializarCuartos();
	void Inicio();
	void MenuOpciones();
	std::string GetOpcion(std::istream&);
	void ActualizarMundo(OpcionesMenu);  // aqui en realidad es Opcion::OpcionesMenu... 
};

#endif // !JUEGO_H
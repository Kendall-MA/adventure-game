#ifndef OPCIONSALIR_H
#define OPCIONSALIR_H

#include "Opcion.h"

class OpcionSalir : public Opcion {
private:
	bool salir;

public:
	bool GetOpcionSalir() const;
	virtual bool EvaluarOpcion(const std::string&, Jugador&);
};

#endif // !OPCIONSALIR_H
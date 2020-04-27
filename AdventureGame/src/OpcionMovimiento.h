#ifndef OPCIONMOVIMIENTO_H
#define OPCIONMOVIMIENTO_H

#include "Cuarto.h"
#include "Opcion.h"

class OpcionMovimiento : public Opcion {
public:
	OpcionMovimiento(Cuarto::CuartosAdyacentes, OpcionesMenu, const std::string&);
	virtual bool EvaluarOpcion(const std::string&, Jugador&);
};

#endif // !OPCIONMOVIMIENTO_H
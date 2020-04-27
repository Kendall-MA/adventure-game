#ifndef OPCIONABRIRCOFRE_H
#define OPCIONABRIRCOFRE_H

#include "Cofre.h"
#include "Opcion.h"

class OpcionAbrirCofre : public Opcion {
private:
	Cofre* cofre;

public:
	OpcionAbrirCofre(Cofre*, const std::string&);
	virtual void EvaluarOpcion(Jugador&);
};

#endif // !OPCIONABRIRCOFRE_H
#ifndef OPCION_H
#define OPCION_H

#include "Jugador.h"

enum class OpcionesMenu { /* Aqui van las opciones */ };
class Opcion {
private:
	OpcionesMenu opcion_seleccionada;
	std::string texto_opcion;
	std::string texto_salida;

public:
	Opcion(OpcionesMenu, const std::string);

	void SetTextoOpcion(const std::string&);
	std::string& GetTextoSalida() const;
	OpcionesMenu GetOpcionSelecionada() const;

	virtual bool EvaluarOpcion(const std::string&, Jugador&) = 0;
};

#endif // !OPCION_H
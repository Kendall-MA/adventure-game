#ifndef CUARTO_H
#define CUARTO_H

#include <array>
#include <map>
#include <vector>

#include "Cofre.h"
#include "Enemigo.h"
#include "Opcion.h"

class Cuarto {
private:
	std::array<Cuarto*, 5> lista_cuartos;
	std::map<int, Opcion*> opciones_estaticas;
	std::vector<Opcion*> opciones_dinamicas;
	Enemigo* enemigo;
	Cofre* cofre;

public:
	Cuarto();
	enum class CuartosAdyacentes { /* Agregar Opciones */ };

	void AgregarOpcionEstatica(Opcion*);
	void AgregarOpcionDinamica(Opcion*);
	void AgregarCuarto(CuartosAdyacentes, Cuarto*);
	void GetCuarto(CuartosAdyacentes) const;
	void ImprimeOpciones() const;
	Opcion* EvaluarOpciones(unsigned int);
};

#endif // !CUARTO_H
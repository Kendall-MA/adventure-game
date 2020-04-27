#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
	std::string nombre;

public:
	Item(const std::string nom) : nombre{ nom } {}
	std::string GetNombre() const { return nombre; }
};

#endif // !ITEM_H
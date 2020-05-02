#pragma once
#include "../types.h"

class Vehiculo{
	uInt velMax;
	uInt cargamax;

	Vehiculo();
	Vehiculo(uInt v,uInt c):velMax{v},cargaMax{c}{}
};

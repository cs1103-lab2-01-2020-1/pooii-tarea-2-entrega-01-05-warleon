#pragma once
#include "../types.h"
#include "../Pedido/Pedido.cpp"

class Usuario{
	nameType nombre;
	passType contrasenia;
	pedidosListType ordenes[1];
public:
	Usuario();
	Usuario(const std::string&, const std::string&);

	void pedir(uInt,const std::string&);
	void pedir(uInt,const stringListType&);

};

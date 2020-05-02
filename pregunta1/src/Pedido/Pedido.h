#pragma once
#include "../types.h"

class Pedido{
	stringListType listaPedidos;
	stateType estados[4]={
		"Sin cancelar",
		"En el almacen",
		"En camino",
		"Entregado"
	};
	uInt estadoActual=0;

public:
	Pedido();
	Pedido(const stringListType&);
	
	void aniadirPedido(std::string);
	void aniadirPedidos(const stringListType&);


};

#include "Pedido.h"

Pedido::Pedido(){}
Pedido::Pedido(std::string pedidoInicial){listaPedidos.push_back(pedidoInicial);}
Pedido::Pedido(const stringListType& pedidos){listaPedidos.insert(listaPedidos.end(),pedidos.begin(),pedidos.end());}
	
void Pedido::aniadirPedido(std::string nuevoPedido){listaPedidos.push_back(nuevoPedido);}
void Pedido::aniadirPedidos(const stringListType& nuevosPedidos){listaPedidos.insert(listaPedidos.end(),nuevosPedidos.begin(),nuevosPedidos.end());

#include "Usuario.h"

Usuario::Usuario(){}
Usuario::Usuario(const std::string& nombre_, const std::string& conntrasenia_):nombre{nombre_}, contrasenia{conntrasenia_}{}


void Usuario::pedir(uInt index,const std::string& orden){ordenes[index]->aniadirPedido(orden);}

void Usuario::pedir(uInt index,const stringListType& nuevasOrdenes){ordenes[index]->aniadirPedidos(nuevasOrdenes);}

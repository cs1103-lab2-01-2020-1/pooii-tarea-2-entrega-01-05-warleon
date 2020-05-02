#include "Registrador.h"

Registrador::Registrador(){}
Registrador::Registrador(DB* baseDatos):{baseDeDatos=baseDatos;}{}

Usuario* Registrador::registrarUsuario(const std::string& nombre,const std::string& contrasenia){
	Usuario* nuevoUsuario=baseDeDatos->aniadirUsuario(nombre, contrasenia);
		
	return nuevoUsuario;
}
Usuario* Registrador::loguearUsuario(const std::string& nombre,const std::string& contrasenia){}//no se usa

void Registrador::asignarDB(DB* nuevoDB){baseDeDatos=nuevoDB;}

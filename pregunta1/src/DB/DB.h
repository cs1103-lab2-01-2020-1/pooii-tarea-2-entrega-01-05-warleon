#pragma once
#include "../types.h"
#include "../Usuario/Usuario.cpp"

class DB{
	usersListType listaUsuarios;
	nameType nombreDB="miBaseDeDatos";

	Usuario* buscarUsuario(const std::string&);
	Usuario* aniadirUsuario(const std::string&,const std::string&);
public:
	DB();
	DB(nameType nombre);
	~DB();

	void guardar();

	friend class Registrador;
};

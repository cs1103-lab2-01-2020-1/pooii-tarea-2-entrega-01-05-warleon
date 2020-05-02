#pragma once
#include "../types.h"
#include "../DB/DB.cpp"

class Registrador{
	DB* baseDeDatos=nullptr;

public:
	Registrador();
	Registrador(DB*);

	Usuario* registrarUsuario(const std::string&,const std::string&);
	Usuario* loguearUsuario(const std::string&,const std::string&);

	void asignarDB(DB*);
};

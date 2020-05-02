#pragma once
#include "../types.h"
#include "../DB/DB.cpp"
#include "../Registrador/Registrador.cpp"

class App{
	DB miDB;
	Registrador miReg;
public:
	App();

	void iniciar();

};

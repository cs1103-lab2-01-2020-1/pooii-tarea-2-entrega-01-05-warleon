#include "DB.h"

DB::DB(){}
DB::DB(nameType nombre):nombreDB{nombre}{}

DB::~DB(){
	guardar();
	auto it=listaUsuarios.begin();
	while(it!=listaUsuarios.end())
		delete it++;
}


User* DB::buscarUsuario(const std::string& nombre){
	if(listaUsuarios.find(nombre)==listaUsuarios.end())//si no existe
			return nullptr;
	
	User* encontrado=listaUsuarios.find(nombre);

	return encontrado;
}


Usuario* DB::aniadirUsuario(const std::string& nombre,const std::string& constrasenia){
	if(nombre.compare("")==0 || contrasenia.compare("")==0)
		return nullptr;

	if(nombre.find(" ")!=-1 || contrasenia.find(" ")!=-1)//si contiene espacios
			return nullptr;

	if(listaUsuarios.find(nombre)!=listaUsuarios.end())//si ya existe
		return nullptr;

	listaUsuarios[nombre]= new Usuario(nombre,constrasenia);

	return listaUsuarios[nombre];
}

	
void DB::guardar(){}

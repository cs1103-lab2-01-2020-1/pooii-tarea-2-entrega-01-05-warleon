#include "app.h"


App::App(){}

void App::iniciar(){
	std::cout<<"¿Nuevo/a por aqui? Registrate para continuar:\n";
	nameType nombre;passType contrasenia;
	uInt intentos=0;
	Usuario* usuario_=nullptr;
	do{
	if(intentos++>0)
		std::cout<<"Nombre o contrasenia no permitido/a intenta de nuevo\n";

	std::cout<<"NOTA: debes llenar cada dato pedido y el uso de <espacio> no esta permitido.\n";

	std::cout<<"Nombre: ";std::cin>>nombre;
	std::cout<<std::endl;
	std::cout<<"contrasenia: ";std::cin>>contrasenia;
	std::cout<<std::endl;

	usuario_=miReg.registrarUsuario(nombre,contrasenia);

	}while(usuario_==nullptr);

	std::cout<<"Procede a escribir qué productos te gustaria ordenar :D\n Si haz terminado deja la orden vacia o empieza con un <espacio>\n";

	stringListType pedidos;
	std::string orden;
	intentos=1;
	do{
	orden="";
	std::cout<<"Orden N°"<<intentos<<": ";std::cin>>orden;std::cout<<std::endl;
	
	if(orden.compare("")==0 || orden[0]==' ')
		break;

	pedidos.push_back(orden);

	}while(1);
	
	usuario_->pedir(0,pedidos);

	std::cout<<"se acabo la demo wa dormir ...zzz...\n";

}

#include "Molde.hpp"
#include "ExpresionRegular.hpp"
#include <iostream>

using namespace std;

int main(){
	ExpresionRegular nuevaER("(h)*(Hola)|(Mundo)");
	Molde nuevoMolde;
	nuevoMolde.transisionOR(5, 12);
	nuevoMolde.cerradura(2, 2);
	nuevoMolde.concatenacion(4, "Hola");
	nuevoMolde.concatenacion(5, "Mundo");
}

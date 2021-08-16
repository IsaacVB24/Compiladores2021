//@author Isaac Victoria Benavides

#include <iostream>
#include <stdlib.h>

using namespace std;

class AutomataFinitoDeterminista{
	private:
		int numeroNodos;
		int conexionesPorNodo = numeroNodos - 1;
		int inicio;
		int nodoFinal;
		int nodoActual;
		int *nodoSiguiente;
	public:
		void irANodo();
		void comprobarTransicion();
};

void AutomataFinitoDeterminista::irANodo(){
	
}

void AutomataFinitoDeterminista::comprobarTransicion(){
	
}

class AutomataFinitoNoDeterminista{
	private:
		int numeroNodos;
		int conexionesPorNodo = numeroNodos - 1;
		int inicio;
		int nodoFinal;
		int nodoActual;
		int *nodoSiguiente;
	public:
		void irANodo();
};

void AutomataFinitoNoDeterminista::irANodo(){
	
}

int main(){
	AutomataFinitoDeterminista nuevoAFD;
	AutomataFinitoNoDeterminista nuevoAFND;
}

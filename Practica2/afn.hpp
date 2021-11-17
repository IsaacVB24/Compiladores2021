#include <iostream>
#include <vector>

void funcionDeTransicion(char *estadosSiguientes);
void agregarEstado();
//AFN representado por tabla de transiciones
class AFN{
	public:
		std::vector<char> conjuntoDeEstados;
		std::vector<char> alfabetoDeEntrada;
		std::vector<char> estadosSiguientes;
		char estadoInicial;
		std::vector<char> estadosFinales;
		std::vector<bool> yaEstaEn;
		std::vector<char> estadosAnt;
		std::vector<char> estadosNuev;
		//char mover[][];
		int numeroDeEstados;
		AFN(int numeroDeEstados){
			conjuntoDeEstados = {};
			alfabetoDeEntrada = {};
			estadosSiguientes = {};
			estadoInicial = 'a';
			estadosFinales = {};
			for(int i=0; i<numeroDeEstados; i++){
				yaEstaEn[i] = {false};
			}
			std::cout << "El número de estados es: ";
		}
};

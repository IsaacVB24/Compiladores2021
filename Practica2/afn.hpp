#include <iostream>
#include <vector>

void funcionDeTransicion(char *estadosSiguientes);

class AFN{
	public:
		std::vector<char> conjuntoDeEstados;
		std::vector<char> alfabetoDeEntrada;
		std::vector<char> estadosSiguientes;
		char estadoInicial;
		std::vector<char> estadosFinales;
		AFN(){
			conjuntoDeEstados = {};
			alfabetoDeEntrada = {};
			estadosSiguientes = {};
			estadoInicial = 'a';
			estadosFinales = {};
		}
};

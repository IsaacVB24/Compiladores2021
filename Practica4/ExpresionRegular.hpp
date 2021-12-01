#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

class ExpresionRegular{
	public:
		std::vector<char> operandos, operadores;
		int tamER, auxiliarInsercionOperador=0;
		char epsilon = 'E';
		std::vector<char> listaOperadores = {'(', ')', '*', '|'};
		ExpresionRegular(string expresion){
			tamER = expresion.length();
			for(int i=0; i<tamER; i++){
				for(int j=0; j<=3; j++){
					if(expresion[i] == listaOperadores[j]){
						operadores.push_back(listaOperadores[j]);
						auxiliarInsercionOperador++;
					}
				}
			}
			cout << endl << "Los operadores detectados en la expresión regular '" << expresion << "' son: " << endl;
			for(int k=0; k<=(auxiliarInsercionOperador-1); k++){
				cout << operadores[k];
			}
		}
};

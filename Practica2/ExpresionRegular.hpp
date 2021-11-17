#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

class ExpresionRegular{
	public:
		std::vector<char> operandos, operadores;
		int tamER, auxiliarInsercionOperador=0;
		std::vector<char> listaOperadores = {'(', ')', '+', '|'};
		ExpresionRegular(string expresion){
			for(int i=0; i<expresion.length(); i++){
				for(int j=0; j<3; j++){
					if(expresion[i] == listaOperadores[j]){
						operadores.push_back(listaOperadores[j]);
						auxiliarInsercionOperador++;
					}
				}
			}
			for(int k=0; k<=(auxiliarInsercionOperador-1); k++){
				cout << operadores[k];
			}
			cout << expresion.length();
			operadores = {};
			operandos = {};
			tamER = expresion.length();
		}
};

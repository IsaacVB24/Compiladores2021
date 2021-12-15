#include "AutomataFD.hpp"
#include <iostream>

using namespace std;

int main(){
	FILE *fptr;
	fptr = fopen("prueba.dot", "wb");
	string er;
	cout << "Para hacer uso de \"|\" y \"*\", use paréntesis en ambos lados (Ejemplo: (ab|f(a*)). \n\nIngrese la expresión regular: ";
	cin >> er;
	cout << er << endl << endl;
	fprintf(fptr, "digraph AFN{\nrankdir = LR;\n");
	string prueba="h(osssl(daqws)asdcsdc)";	
	
	
	concatenacion(er, fptr, er.length());
	//seleccion(prueba);
	fprintf(fptr, "\n}");
	ESTADO nuevo;
	fclose(fptr);
	system("dot.exe -Tpng prueba.dot -o grafo.png");
	return 0;
}

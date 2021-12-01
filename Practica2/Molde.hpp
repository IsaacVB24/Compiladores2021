#include <string>
#include <vector>

class Molde{
	int cantEstados;
	Molde(){
		cantEstados = 0;
	}
	typedef struct{
		int *edoOrigen, edoDestino;
		char etiqueta;
	} Transicion;
	public:
		int transicionEpsilon(int edoOrigen, int edoDestino){
			Transicion epsilon;
			epsilon.edoDestino = edoDestino;
			epsilon.edoOrigen = &epsilon.edoDestino;
			epsilon.etiqueta = 'E';
			return epsilon.edoDestino;
		}
		void concatenacion(int numCaracteres, std::string aConcatenar){
			std::vector<char> caracteres;
			std::vector<int> punteroDeCaracter;
			for(int i = 0; i<numCaracteres; i++){
				caracteres[i] = aConcatenar[i];
				punteroDeCaracter[i] = caracteres[i];
			}
		}
		void cerradura(int edoOrigen, int edoDestino){
			transicionEpsilon(edoDestino, edoDestino+1);
			transicionEpsilon(edoDestino+1, edoOrigen);
			transicionEpsilon(edoOrigen-1, edoDestino+1);
			transicionEpsilon(edoOrigen-1, edoOrigen);
		}
		void trancisionOR(int leftState, int rightState){
			int origen = leftState-1;
			int edoFinal = rightState+1;
			int auxOrigen;
			transicionEpsilon(origen, leftState);
			transicionEpsilon(auxOrigen, rightState);
			transicionEpsilon(leftState, edoFinal);
			transicionEpsilon(rightState, edoFinal);
		}
};

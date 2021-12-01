


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
		void cerradura(){
			
		}
		void concatenacion(){
			
		}
		void trancisionOR(){
			
		}
};

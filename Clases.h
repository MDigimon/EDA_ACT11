#ifndef Clases
#define Clases

#include <iostream>

using namespace std;

class ArregloDinamico{
	private:
		int *arreglo;
		size_t tam;
		size_t cont;
		const static size_t MAX = 5;
	public:
		ArregloDinamico();
		~ArregloDinamico();
		void insertar_inicio(int v);
		void insertar_final(int v);
		void expandir();
		void imprimir();
};




#endif

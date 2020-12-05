#include <iostream>

#include "Clases.h"

using namespace std;

int main() {
	ArregloDinamico arr;
	arr.insertar_final(0);
	arr.insertar_final(1);
	arr.insertar_final(2);
	arr.insertar_final(3);
	arr.insertar_inicio(3);
	arr.imprimir();
	return 0;
}

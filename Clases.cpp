#include "Clases.h"

ArregloDinamico::ArregloDinamico(){
	arreglo = new int[MAX];
	cont = 0;
	tam = MAX;
}

ArregloDinamico::~ArregloDinamico(){
	delete[] arreglo;
}

void ArregloDinamico::insertar_final(int v){
	if(cont == tam){
		expandir();
	}
	arreglo[cont] = v;
	cont++;
}

void ArregloDinamico::insertar_inicio(int v){
	if(cont == tam){
		expandir();
	}
	for(size_t i=cont; i>0; i--){
		arreglo[i] = arreglo[i-1];
	}
	arreglo[0] = v;
	cont++;
}

void ArregloDinamico::expandir(){
	int *nuevo = new int[tam+MAX];
	
	for(size_t i=0; i<tam; i++){
		nuevo[i] = arreglo[i];
		delete[] arreglo;
		arreglo = nuevo;
		tam = tam + MAX;
	}
}

void ArregloDinamico::imprimir(){
	for(size_t i=0; i<cont; i++){
		cout << "Dato: " << arreglo[i] << endl;
	}
}

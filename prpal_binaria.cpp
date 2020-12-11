/*Dado un conjunto de números ordenados almacenados en un vector de tamaño n, escriba un
algoritmo que retorne la posición donde se encuentra un elemento especificado por el usuario
(búsqueda binaria recursiva).*/

//SIMON SANCHEZ ALVAREZ
//Politecnico JIC

#include "proceso_binaria.h"

int main(){
	int n = 0, i = 0, dato;
	int mitad = 0;
	cout << "\tINGRESE EL TAMANO DEL VECTOR: ";
	cin >> n;
	mitad = n/2;
	//mitad = redon(mitad);
	cout << "\n\t" << mitad;
	int *VEC = new int[n];
	VEC = insertar(VEC, n, i);
	mostrar(VEC, i, n);
	cout << "\n\tINGRESE EL DATO QUE QUIERE BUSCAR: ";
	cin >> dato;
	dato = busqueda(VEC, n, dato, mitad);
	if(dato == 0){
		system("cls");
		cout << "\a\n\tNO EXISTE EL DATO EN LA LISTA!\n\n\t";
		system("pause");
	}
	else{
		system("cls");
		cout << "\n\tSE HA ENCONTRADO EL DATO [" << dato << "] POR MEDIO DE BUSQUEDA BINARIA RECURSIVA!\n\n\t";
		system("exit");
	}
	return 0;
}

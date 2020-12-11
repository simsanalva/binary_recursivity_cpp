#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>

using namespace std;

int *ordenar_vec(int *, int , int, int);		//PARAMETRIZACION
int *ordenar_vec(int *, int );

int *insertar(int *VEC, int n, int i){
	if(i == n){
		return 0;
	}
	else{
		cout << "\n\tINGRESE NUMERO EN LA POSICION [" << i << "]: ";
		cin >> VEC[i];
		i++;
		insertar(VEC, n, i);
	}
	return VEC = ordenar_vec(VEC, n);
}
int *ordenar_vec(int *VEC, int n){
	int aux;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(VEC[i] > VEC[j]){
				aux = VEC[i];
				VEC[i] = VEC[j];
				VEC[j] = aux;
			}
		}
	}

	return VEC;
}
void mostrar(int *VEC, int i, int n){
	if(i == n){
		cout << "\n\tLISTA MOSTRADA CORRECTAMENTE!\n\t";
		system("pause");
	}
	else{
		cout << endl << "\t";
		cout << " ==> " << VEC[i];
		i++;
		mostrar(VEC, i, n);
	}
}
int busqueda(int *VEC, int n, int dato, int mitad){

	if(dato != VEC[mitad]){	
		if(dato < VEC[mitad]){
			mitad = mitad/2;
			if(mitad == 0 && VEC[mitad] != dato){
				return 0;
			}
		}
		else if(dato > VEC[mitad]){
			mitad = mitad+(mitad/2);
			if(mitad == n){
				return 0;
			}
		}
		busqueda(VEC, n, dato, mitad);
	}
	else{
		return VEC[mitad];
	}	
}
int redon(float x){
	if(x-floor(x) < ceil(x)-x) return floor(x);
	else 	return ceil(x);
}

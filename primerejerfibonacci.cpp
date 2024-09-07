/* 
	Secuencia de Fibonacci 
	La secuencia de fibonacci es la suma de los anteriores 
	numeros y el resultado es el numero siguiente.
	
*/
#include <iostream>
#include <conio.h>
using namespace std;

int Fibonacci (int x);

int main (){
		int numero;
		cout << "Ingresar la cantidad de la serie Fibonacci: ";
		cin >> numero;
		
		getch ();
		return 0;
		
}

int Fibonacci(int x){
	int anterior=0, numero= 1, aux;
	
	for (int i=0; i<x; i++){
		cout << anterior <<"";
		aux= numero;
		numero+= anterior;
		anterior= aux;
		
	}
	return anterior;
	
		}

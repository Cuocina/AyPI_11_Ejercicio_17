#include <iostream>
using namespace std;

void Swap(int **a, int **b);

// Ejercicio 17 parte B. HAcer una funcion que intercambie los valores de punteroA y punteroB
int main() {
	int a = 100;
	int b = 500;
	int* punteroA = &a;
	int* punteroB = &b;
	cout << punteroA << ": " << *punteroA << endl;//DireccionA: 100
	cout << punteroB << ": " << *punteroB << endl;//DireccionB: 500

	// Llamar a su funcion
	Swap(&punteroA, &punteroB);

	cout << punteroA << ": " << *punteroA << endl;//DireccionB: 500
	cout << punteroB << ": " << *punteroB << endl;//DireccionA: 100

	return 0;
}

void Swap(int **a, int **b) {
	int* auxiliar = *a;
	*a = *b;
	*b = auxiliar;
}

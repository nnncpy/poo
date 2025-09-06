//Programa001.cpp  Programa de suma de digitos de numero de 3 cifras
// N1=987 ----> Suma=24
//Autor: Ian Andre Negron Cartolin

#include <iostream>
#include <cmath>
using namespace std; //ya no es necesario colocar std siempre
//cada vez que se abren corchetes, es una funcion
int main() {
	int num, sum;
	cout << "Ingrese un numero de 3 cifras\n";
	cin >> num;
	if (num >= 100 && num <= 999) {
		sum = num / 100 + num % 10 + (num / 10 - num / 100 * 10);
		cout << "Toma tu suma mi king:\n" << sum;
		cout << "\n";
		system("Pause");
		return 0;
		//cuando se usa void, la funcion no devuelve un valor
	}
	else {
		cout << "El numero esta fuera de rango\n";
		system("Pause");
		return 0;
	}
}

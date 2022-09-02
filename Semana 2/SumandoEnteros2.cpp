
#include <iostream>

using namespace std;


/*Programa que recibe dos enteros por teclado e imprime
la suma de ambos */

int main(){

    //declarando variables//

    int a;
    int b;

    cout << "Ingrese su primer numero: ";
    cin >> a;
    cout << "Ingrese un segundo numero";
    cin >> b;

    int suma = a+b;
    cout <<"La suma es : "<< suma<< endl;
    return 0;

}
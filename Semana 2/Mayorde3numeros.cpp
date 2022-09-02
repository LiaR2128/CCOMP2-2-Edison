

#include <iostream>

using namespace std;

/** Implemente un programa que solicite 3 enteros 
 * eimprima el mayor de ellos **/

int  main() {
    int a;
    int b;
    int c;

    cout << "Ingrese su primer numero: ";

    cin >> a;
    cout << "Ingrese un segundo numero";
    cin >> b;

    if (a>b){
        cout <<"El mayor es : "<< a << endl;
    }
    
    if (b>a)
        cout <<"El mayor es : "<< b << endl;

    return 0;

}
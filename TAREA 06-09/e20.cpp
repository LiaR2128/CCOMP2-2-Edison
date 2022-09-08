

#include <iostream>

using namespace std;



int main(){

    int radio;
    
    float pi;

    pi=3.14;
    



    cout << "Ingrese el radio"<< endl;
    cin >> radio;

    float diam = radio*2;
    float circu = pi*2*radio;
    float area = radio*pi*pi; 




    cout << "El diametro es: " << diam << endl;

    cout << "El perimetro de la circunferencia es:  " << circu << endl;

    cout << "El area es : " << area<< endl;

    return 0;


}


//Implemente un programa que reciba un numero e imprima si es biciesto//

#include <iostream>

using namespace std;

int main () {

    int year;

    cout << "Ingrese el año" << endl;
    cin >> year;


    if (year<2000) {
        if(year%4 == 0 && year%100 == 0 && year%400==0)
            cout << "Es biciesto" << endl;
        else
            cout << "No es bisiesto"<< endl;

    
    if (year>2000)
        if (year%4==0)
        cout << "Es biciesto" << endl;
        else {
        cout << "No es biciesto" << endl;
        }


    return 0;
}

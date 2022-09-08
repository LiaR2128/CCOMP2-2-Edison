#include <iostream>

using namespace std;

int main() {
    



    int a;

    int b;


    cout<< "Ingrese el primer numero :" <<endl;
    cin>> a;

    cout << "Ingrese el segundo numero:"<<endl;
    cin>> b;

    int suma= a+b;

    if (a%2==1){
        cout << a<< " Es impar"<< endl;
    }
    else 
        cout << a << " Es par"<< endl;

    if (b%2==1) {
        cout << b << " Es impar" << endl;
    }
    else
        cout << b<< " Es par" << endl;

    if (suma%2==1) {
        cout << "La suma es "<< suma<< ", y es impar";
    }
    else    
        cout << "La suma es "<< suma<< ", y es par";

    return 0;

}

#include <iostream>

using namespace std;

int main() {


    int a;
    int b;
    int c;


    cout << "Ingrese el primer numero : "<<endl;
    cin >> a;
    cout << "Ingrese el segundo numero : "<<endl;
    cin >> b;
    cout << "Ingrese el tercer numero : "<<endl;
    cin >> c;


    if (c%a==0 && c%b==0){
        cout << a << " y " << b<< " son factores de "<<c<<endl;
    }
    else
        cout << a << " y " << b<< " no son factores de "<<c<<endl;

    return 0;


}



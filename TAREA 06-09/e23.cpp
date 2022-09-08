
#include <iostream>

using namespace std;

int main() {


    int a;
    int b;
    int c;
    int d;
    int e;

    cout << "Ingrese el primer numero" <<endl;
    cin >> a;
    cout << "Ingrese el segundo numero" <<endl;
    cin >> b;
    cout << "Ingrese el tercer numero" <<endl;
    cin >> c;
    cout << "Ingrese el cuarto numero" <<endl;
    cin >> d;
    cout << "Ingrese el quinto numero" <<endl;
    cin >> e;


    if (a>=b && a>=c && a>=d && a>=e){
        cout <<"El numero mas grande es " << a<< endl;

    }
    if (b>=a && b>=c && b>=d && b>=e){
        cout << "El numero mas grande es "<<b<< endl;
    }
    if (c>=a && c>=b && c>=d && c>=e){
        cout <<"El numero mas grande es "<<c<< endl;
    }
    if (d>=a && d>=b && d>=c && d>=e){
        cout <<"El numero mas grande es "<< d<< endl;
    }

    if (e>=a && e>=b && e>=c && e>=d){
        cout <<"El numero mas grande es "<<e<< endl;
    }

    if (a<=b && a<=c && a<=d && a<=e){
        cout <<"El numero mas pequeño es " << a<< endl;

    }
    if (b<=a && b<=c && b<=d && b<=e){
        cout << "El numero mas pequeño es "<<b<< endl;
    }
    if (c<=a && c<=b && c<=d && c<=e){
        cout <<"El numero mas pequeño es "<<c<< endl;
    }
    if (d<=a && d<=b && d<=c && d<=e){
        cout <<"El numero mas pequeño es "<< d<< endl;
    }

    if (e<=a && e<=b && e<=c && e<=d){
        cout <<"El numero mas pequeño es "<<e<< endl;
    }

    return 0;

}


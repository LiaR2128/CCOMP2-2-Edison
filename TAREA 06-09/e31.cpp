#include <iostream>

using namespace std;

int main() {


    int millas;
    int costogalon=18;
    int tarifa=37;
    float peaje=17.4;



    cout<<"Ingrese el numero de millas"<<endl;
    cin>>millas;
    float promgal=millas/20;

    cout<<"Total de millas: "<<millas<<endl;
    cout<<"Costo por galon: "<<costogalon<<endl;
    cout<<"Promedio de millas por galon: "<<promgal<<endl;
    cout<<"La tarifa diaria que se paga es de "<<tarifa<< " nuevos soles"<<endl;
    cout<<"El peaje a pagar actualmente es de "<<peaje<< " nuevos soles"<<endl;


    return 0;

}



    





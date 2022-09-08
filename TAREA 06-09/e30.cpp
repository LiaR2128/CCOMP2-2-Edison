#include <iostream>

using namespace std;

int main() {


    int peso;

    float estatura;

    float imc;


    cout<< "Ingrese su peso: "<< endl;
    cin>>peso;


    cout<< "Ingrese su estatura: "<< endl;
    cin>>estatura;



    imc=peso/(estatura*estatura);


    cout<<"Su IMC es: "<<imc<<endl;

    cout<< "IMC VALORES\nBajo de peso:\tMenor a 18.5\nNormal:\t Entre 18.5 y 24.9\nSobrepeso:\tEntre 25 y 29.9\nObesidad:\t30 o mas"<<endl;

    return 0;

}


    
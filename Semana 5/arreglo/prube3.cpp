

#include "point.h"
#include <iostream>

using namespace std ;


void imprimirpoints (const point arr[],const int tam){

    for (int i = 0; i<tam;i++){

        arr[i].print();
    }


}



int main (){


    point p1;

    point p2{4,3};

    point p3{4,0};

    point arr[]= {p1,p2,p3};


    imprimirpoints(arr,3);

    
}
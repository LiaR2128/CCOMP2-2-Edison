
#include <iostream>
#include "point.h"
using namespace std;

int main(){

    point p1;
    point p2{12,5};
    point p3{2,15};
    point p4{10,8};
    point p5 {1,4};

    point arreglo[]={p1,p2,p3,p4,p5};
    int tam= sizeof(arreglo)/sizeof(arreglo[0]);

    point *ptr = &arreglo [0];
    //point *ptr = arreglo;

    for (int i=0; i<tam; i++, ptr++)
        ptr -> print();
    
    /*ptr ->print();
    arreglo->print(); */
    return 0;

}
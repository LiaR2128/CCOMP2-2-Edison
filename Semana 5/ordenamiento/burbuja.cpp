



#include <iostream>

#include "point.h"


using namespace std;



 void burbuja ( int arr[], int elements){


    for (int i =0 ; i< elements; i ++) {


        for (int j =0; j<elements-1; j++){

            if (arr[j]> arr [j+1]){
                int temp = arr[j];

                arr[j]= arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

 }



    void imprimirarreglo(int arreglo [], int tam){


        cout << "[";
        for (int i =0; i<tam;i++){


            cout << arreglo [i]<<" ";
        }

        cout << "]"<<endl;
    }


    void insertionSort(int arr[], int n) { 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 

        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 


    void bsortpuntos(point arr [], int elements){
         for (int i =0 ; i< elements; i ++) {


        for (int j = i+1; j<elements-1; j++){

            if (arr[i].getX()> arr [j].getX()){

                //se deben intercambiar puntos
                /*int temp = arr[j];

                

                arr[j]= arr[j+1];
                arr[j+1]=temp;
                */

            }
        }
    }

 }
        
    void insertionspoints(point arr[], int n) { 

    point key;
    int j; 
    for (int i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 

        while (j >= 0 && arr[j].getX() > key.getX())
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 









 



int main () {



    int arreglo [] = {21,65,98,15};


    /*burbuja(arreglo,4);

    imprimirarreglo(arreglo, 4);

    */

    insertionSort(arreglo,4);

    imprimirarreglo(arreglo, 4);

    //sizeof -- retorna el tamaño en bytes del tipo de dato

    int tam = sizeof(arreglo) / sizeof(arreglo[0]);


    imprimirarreglo(arreglo, tam);
    insertionSort(arreglo, tam);
    imprimirarreglo(arreglo, tam);


    return 0;
}
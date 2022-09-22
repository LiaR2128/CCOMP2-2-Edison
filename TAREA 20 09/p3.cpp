
#include <string>
#include <iostream>

using namespace std;




long long primecounter=0;

int box=0;

int main (){

    for (long long x=1;x<=600851475143;x=x+1){



        if (600851475143%x==0){

            for (long long y=1;y<=x;y=y+1){

                if (x%y==0){

                    box=box+1;

                }

            }
            if (box==2){

                primecounter=x;             
            }
            else{
            box=0;
            }
        }


    }


    cout<<"el maximo primo divisor es :"<<primecounter<<endl;

    return 0;
}







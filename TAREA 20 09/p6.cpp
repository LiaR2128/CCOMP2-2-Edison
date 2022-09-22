#include <string>
#include <iostream>

using namespace std;


int main(){
    int box=0;
    int box2=0;

    for (int x=1;x<=100;x=x+1){

        box=box+x*x;

    }

    for (int x=1;x=100;x=x+1){

        box2=box2+x;
    }

    box2=box2*box2;


    cout<<"La diferencia es: "<<box2-box<<endl;





    return 0;
}   


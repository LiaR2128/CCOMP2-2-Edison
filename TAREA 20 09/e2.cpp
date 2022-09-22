#include <string>
#include <iostream>

using namespace std;


int main() {

    long long incr=0;
    


    long long x=1;
    long long y=2;
    long long z=0;
    long long suma=2;
    while (z<=4000000){
        z=x+y;


        if (z%2==0){
            suma=suma+z;

        }

        x=y;
        y=z;


        }

    cout<<suma<<endl;

    return 0;





    }

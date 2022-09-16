


#include <string>
#include <iostream>

using namespace std;



int main () {
long long box=0;



for(long long i=1; i<=600851475143 ; i++) {

    if (600851475143 %i==0){
        if (i%5!=0 && i%4 != 0 && i%6!=0 && i%7!=0 && i%11!=0){

            box = i;
            
        }
    }



}
    cout<<box<<endl;



}
#include <string>
#include <iostream>

using namespace std;


int main() {


    long long call=0;
    int box=0;
    for (long long x=1;x<=2000000;x=x+1){

        for (long long y=1;y<=x;y=y+1){

                if (x%y==0){
                box=box+1;
            }
        }
        if (box==2){
            call=call+x;
        }
        else{
            if (box!=2){
                box=0;
            }
        }
    }

    cout<<call<<endl;

    return 0;
}
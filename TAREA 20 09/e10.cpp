#include <string>
#include <iostream>

using namespace std;


int main() {




    long long call=0;



    for (unsigned long long	 x=1;x<=2000000;x=x+1){

        unsigned long long	 box=0;

        for (unsigned long long	 y=1;y<=x;y=y+1){

                if (x%y==0){
                box=box+1;
            }
        }
        if (box==2){
            call=call+x;
        }

        
        
    }

    cout<<call<<endl;

    return 0;
}
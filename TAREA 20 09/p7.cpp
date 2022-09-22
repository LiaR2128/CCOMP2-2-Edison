#include <string>
#include <iostream>

using namespace std;




int main(){

    int position=0;

    int pcounter=0;

    int initial=1;
    int box=0;

    while (position<10000) {


        for (int x=1;x<=initial;x=x+1){


            if (initial%x==0){
                box=box+1;
            }


        }

        if (box==2){
            position=position+1;
            pcounter=initial;
        }
        initial=initial+1;
        if (box!=2){
            box=0;
        }
    }


    cout<<pcounter<<endl;
    return 0;

}
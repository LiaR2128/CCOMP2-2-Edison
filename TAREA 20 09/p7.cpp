#include <string>
#include <iostream>

using namespace std;




int main(){


    /*

    int aprime=1;
    int ct=0;

    for(int x=1;x<=1001;x=x+1){


        for(int y=1;y<=x;y=y+1){

            if (y%x==0){

                ct=ct+1;


            }
        }
        if (ct==2){
            aprime=x;

        } 
        else{
            if(aprime!=0){
                ct=0;
            }
        }


    }
    */

    int position=0;

    int pcounter=0;

    int initial=1;
    int box=0;

    while (position<6) {


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
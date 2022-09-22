
#include <string>
#include <iostream>

using namespace std;




int main(){

/*
    
    int box=0;


    long long cont=0;

   for (long long x=1;x<=1000000;x=x+1){


    for (int y=1;y<=20;y=y+1){


        if (x%y==0){

            box=box+1;
            
        }
    }

    if (box==20){
        cont=cont+x;
    
    }
    else
        box=0;
    
   }

   */


  int count=0;

  int scale=20;


   while (count<21){

    for (int x=1;x<=20;x=x+1){


        if (scale%x==0){
            count=count+1;
        }
    }

    scale=scale+1;

    if (count<20){

        count =0;
    }
    
    
   }


   cout<<scale-2<<endl;


   return 0;

}


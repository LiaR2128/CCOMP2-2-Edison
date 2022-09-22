#include <string>
#include <iostream>

using namespace std;


int main() {

    int multi =0;

    for (int x=1;x<=1000;x=x+1){

        if (x%3==0 || x%5==0){
            multi=multi+x;
        }
    }


    cout<<multi<<endl;
    return 0;


}
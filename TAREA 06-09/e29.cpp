#include <iostream>

using namespace std;

int main() {


    string c1="0\t0\t0";
    string c2="1\t6\t1";
    string c3="2\t24\t8";
    string c4="3\t54\t27";
    string c5="4\t96\t64";

    string box= c1+"\n"+c2+"\n"+c3+"\n"+c4+"\n"+c5;



    cout<< "Arista\tArea\tVolumen"<<endl;
    cout<< box<<endl;

    return 0;


}





#include <string>
#include <iostream>

using namespace std;




class fecha{
    private:
    int dia;
    int mes;
    int year;


    public:

    fecha(int _year,int _mes, int _dia);

    void setyear(int _year) {
        year=_year;
    
    }

    int getyear() const{
        return year;
    }

    void setmonth(int _mes) {
        mes=_mes;
        if (mes>12)
        mes= 1;

    }

    int getmonth() const {
        return mes;
    }


    void setday(int _dia) {
        dia= _dia;
    }

    int getday() const {
        return dia;
    }


    string displaydate(){
        cout<<year<<"/"<<mes<<"/"<<dia<<"/"<<endl;
    }





};



int main (){


    fecha hoy{2019,12,27};


    cout<< "La fecha actual es : " << 
    hoy.getday()<< " del mes "<< hoy.getmonth()<<
    " del año "<< hoy.getyear();
     


}
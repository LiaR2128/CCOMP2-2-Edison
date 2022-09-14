#include <string>
#include <iostream>

using namespace std;



class Vehicle{
    private:
        string momake;
        int date;
        string fueltyp;
        string col;


    public:
        Vehicle (std:: string makename,int year, string fueltype, string color)
        : momake{makename}{


        }
        

        void setmake(std::string makename){
            momake= makename;
        }

        string getmake()const{
            return momake;
        }

        

        void setdate(int year) {
            date=year;
        }


        int getdate()const{
            return date;

        }

        void setfuel( std:: string fueltype){
            fueltyp=fueltype;
        }

        string getfuel() const {
            return fueltyp;
        }



        void setcolor(std:: string color){
            col=color;
        }

        string getcolor() const {
            return col;
        }


        string displaycardetails () const {

            cout<<"Marca :"<< getmake;
            cout<<"\nAño :" << getdate;
            cout<<"\nTipo de Combustible: "<< getfuel;
            cout<<"\nColor :"<< getcolor;
        }







    };






int main(){
    Vehicle car1 {"Chebrolet", 2016,"Liquido","Rojo"};

    cout << "El carro es de marca: "<< car1.getmake()<<endl;

    cout << "La fecha de creacion fue: "<<car1.getdate()<<endl;

    cout << "El combustible requerido es: "<< car1.getfuel()<<endl;

    cout << "El color del vehiculo es " << car1.getcolor()<<endl;

    return 0;
}
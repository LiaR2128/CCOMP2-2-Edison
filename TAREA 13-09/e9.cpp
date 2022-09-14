#include <string>
#include <iostream>

using namespace std;


class Account {
public:
Account(std:: string accountName, int initialBalance)
: name{accountName} {
    if (initialBalance > 0 ){
        balance= initialBalance;

        }
    }

    void retiro(int retiro){
        if (retiro< balance){
            balance= balance - retiro;

        }
        else
            cout<< "El retiro excedio el saldo de la cuenta"<< endl;
    }

    int getBalance() const {
        return balance;

    }



    void setName (std :: string accountName) {
        name= accountName;
    }

    std:: string getName() const{
        return name;
    }


    private:
        std::string name;
        int balance{0};

};


int main ()
{
    Account account1 {"Jane Green", 50};
    Account account2 {"Jhon Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $"<<account1.getBalance();

    cout << "\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance();

    cout << "\n\nEnter the withdrawal for account1: ";
    int retiro;
    cin >> retiro;
    cout << "removing " << retiro << " to account1 balance";
    account1.retiro(retiro);


    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();

    cout << "\n\nEnter the withdrawal for account2: ";
    cin >> retiro;
    cout << "removing " << retiro << " to account2 balance";
    account2.retiro(retiro);


    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();

    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance() << endl;

    return 0;
}

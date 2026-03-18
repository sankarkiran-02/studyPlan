#include<iostream>
using namespace std;

class Bank{
    private: 
        string Name;
        int Balance;

    public:
        Bank(string name, int bal){
            Name = name;
            Balance = bal;
        }

        void deposit(){
            int depo;
            cout << "Enter Deposit Amount: ";
            cin >> depo;

            Balance +=depo;
        }

        void withDrawal(){
            int withD;
            cout << "Enter WithDrawal Amount: ";
            cin >> withD;

            if(Balance>withD)
                Balance -= withD;
            else
                cerr << "Insuficient Balance !!" << endl;
        }

        void display(){

            cout << endl;
            cout << "Account details: " << endl;
            cout << "---------------- " << endl;
            cout << "Acc Holder Name\t: " << Name << endl;
            cout << "Total Balance \t: " << Balance << endl;
        }
};

int main(){

    string name;
    int bal;

    cout << "Enter Acc Holder Name: ";
            cin >> name;

    cout << "Enter Initial Balance: ";
            cin >> bal;

    Bank Acc(name, bal);

    Acc.deposit();
    Acc.deposit();

    Acc.withDrawal();
    Acc.deposit();
    Acc.withDrawal();

    Acc.display();
}
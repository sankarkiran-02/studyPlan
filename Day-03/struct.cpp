#include<iostream>
using namespace std;

struct data1{
    int a;
    char b;
    double c;
    short int d;
};

struct data2{
    double a;
    int b;
    short int c;
    char d;
};

union data3{
    int a;
    short int b;
    char c;
};

enum data4{ off, on};

int main(){

    cout << sizeof(data1) << endl;      // struct padding
    cout << sizeof(data2) << endl;      // struct optimized

    cout << sizeof(data3) << endl;      // union

    cout << sizeof(data4) << endl;      // enum

    data4 Switch = on;
    cout << "switch : "<< Switch << endl;

}
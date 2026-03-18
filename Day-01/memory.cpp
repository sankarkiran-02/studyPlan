#include<iostream>
using namespace std;

int x = 10;
int y;

static int a = 20;
static int b;

void show(){
    int l = 30;
    cout << "Local Initilized data\t: " << &l << " : " << l << endl;
}

int main(){

    int *c = new int(10);

    cout << "Function Address\t: " << (void *)&show << endl;
    cout << "Global Initilized data\t: " << &x << " : " << x << endl;
    cout << "Global UnInitilized data: " << &y << " : " << y << endl;
    cout << "Static Initilized data\t: " << &a << " : " << a << endl;
    cout << "Static UnInitilized data: " << &b << " : " << b << endl;
    show();
    cout << "Heap UnInitilized data\t: " << c << endl;
}
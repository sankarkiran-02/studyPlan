#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int func(int x, int y, int (*callb)(int, int)){
    return callb(x, y);
}


int main(){

    int s = func(5,6,sum);
    cout << s << endl;

}
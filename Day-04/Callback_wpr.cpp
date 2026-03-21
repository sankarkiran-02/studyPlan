#include<iostream>
#include<functional>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int func(int x, int y, function<int(int, int)>callb){
    return callb(x, y);
}


int main(){

    int s = func(5,6,sum);
    cout << s << endl;

}
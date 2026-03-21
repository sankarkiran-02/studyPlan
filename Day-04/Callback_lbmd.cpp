#include<iostream>
#include<functional>
using namespace std;

int sum(int a, int b, function<int(int, int)>callb){
    return callb(a, b);
}

int main(){

    int s = sum(5,6,[](int a, int b){
        return a+b;
    });
    cout << s << endl;

}
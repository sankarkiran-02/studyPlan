#include<bits/stdc++.h>
using namespace std;

typedef unsigned int U32;   // Predefined data type
typedef vector<int> VInt;   // STL Data Stracture
typedef int arr[3];         // array 

int main(){

    U32 a;              // Predefined data type use
    a = 123456;
    cout << "U32 : " << a << endl;

    VInt V;             // STL Data Stracture use
    for(int i=1; i<6; i++)
        V.push_back(i);

    for(int n : V)
        cout << n << " ";
    cout << endl;

    arr arr1 = {7,8,9}; // array typedef use
    for(int n : arr1)
        cout << n << " ";
    cout << endl;
}
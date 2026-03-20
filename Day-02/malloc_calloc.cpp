#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main(){

    int* S1 = (int *)malloc(sizeof(int)*5);
    int* S2 = (int *)calloc(5, sizeof(int));

    for(int i=0; i<5; i++)
        S1[i] = i+1;

    for(int i=0; i<5; i++)
        cout << S1[i] << " ";
    cout << endl;
    
    for(int i=0; i<5; i++)
        cout << S2[i] << " ";
    cout << endl;
}
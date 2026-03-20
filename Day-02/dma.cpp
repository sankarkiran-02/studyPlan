#include<bits/stdc++.h>
using namespace std;

class Student{

    public:

        Student( ){
            cout << "Constructor Called !"<< endl; 
        }

        ~Student(){
            cout << "Destructor Called !"<< endl << endl; 
        }
};

int main(){
    
    cout << "New & Delete: " << endl;
    // New & Delete
    Student* S1 = new Student();
    delete S1;

    cout << "Malloc and free: " << endl;
    // Malloc and free
    Student* S2 = (Student*)malloc(sizeof(Student));
    free(S2);
}
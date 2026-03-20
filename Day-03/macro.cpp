#include<iostream>
using namespace std;

#define PI 3.14         // object like macro
#define Name "Kiran"

#define print(x) cout <<"value of x is: " << x << endl // function like macro
#define Square(x) ((x)*(x))

#define Express    //conditional Compilation

int main(){

    int radius = 5;
    int result;

    result = PI * Square(radius); // combination of object like & function like
    print(result);

    #ifdef Express              //conditional Compilation (defined)
        cout << "Defined!! " << endl;
    #endif

    #ifndef VALUE               //conditional Compilation (not defined)
        #define VALUE 10
        cout << "Not Defined Value: " << VALUE << endl;
    #endif

    cout << "Today is: " << __DATE__ << endl;       // predefined marcos
    cout << "Time Now: " << __TIME__ << endl;
}
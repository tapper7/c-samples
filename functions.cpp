#include <iostream>
using namespace std;
//function & procedure prototypes
int getINT();
void dispINT(int out);
void dispANS(int out);
int sqINT(int n);

int main(){
    //int n=0;
    //int res=0;
    //n = getINT();
    //dispINT(n);
    //res = sqINT(n);
    //dispANS(sqINT(n));
    dispANS(sqINT(getINT()));
    return 0;
}
//fxn & procedure definitions
int getINT(){
    int in;
    cout << "Enter an integer ";
    cin >> in;
    return in;
}
void dispINT(int out){
    cout << "\n the integer variable is " << out << endl;   
}
int sqINT(int n){
    cout << "\n Squaring the following integer: " << n;
    return n*n;
}
void dispANS(int out){
     cout << "\n Answer = " << out << endl;
}

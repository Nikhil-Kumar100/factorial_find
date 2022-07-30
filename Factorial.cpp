#include<iostream>
using namespace std;
int main(){
    int num;
    long fac=1.0;
    cout<<"Enter Factorial Number :-  ";
    cin>>num;
    for(int i=1;i<=num;i++){
        fac=fac*i;
    }
    cout<<"Factorial of Number is: "<<fac;
}

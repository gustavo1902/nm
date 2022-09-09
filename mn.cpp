#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (a == b){
        cout<<"Os numbers are equal";
    }
    else{
        if (a > b){
            cout<<"The greater number is "<<a;
        }
        else{
            cout<<"The greater number is "<<b;
        }
    
    }
    return 0;
}
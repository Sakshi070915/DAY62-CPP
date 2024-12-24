#include <iostream>
using namespace std;

void swapValues(int &a, int &b){
    int before = a+b;
    cout<<"Before swapping values : "<<before<<endl;

    int temp = a;
    a = b;
    b = temp;

    int after = a+b;
    cout<<"After swapping values : "<<after<<endl;
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    cout<<"Original a : "<<a<<endl;
    cout<<"Original b : "<<b<<endl;

    swapValues(a,b);

    cout<<"after swapped a : "<<a<<endl;
    cout<<"after swapped b : "<<b<<endl;

    return 0;
}
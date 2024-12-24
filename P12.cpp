#include <iostream>
using namespace std;

void square(int &b){
    b = b*b*b;
    cout<<b<<endl;
}

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"original value: "<<a<<endl;
    square(a);
    cout<<"After the value get's triple value: "<<a<<endl;
    return 0;
}
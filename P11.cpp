#include <iostream>
using namespace std;

void square(int a){
    int e;
    e = a*a;
    cout<<e<<endl;
}

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    square(a);
    cout<<a<<endl;
    return 0;
}
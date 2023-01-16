#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"a:";
    cin>>a;

    cout<<"b:";
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;
    cout<<"Swapped values"<<endl;
    cout<<"a:"<<a<<endl<<"b:"<<b;
    return 0;

}
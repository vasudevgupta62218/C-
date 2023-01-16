#include<iostream>
using namespace std;

void addition(int a,int b){
    int sum=a+b;
    cout<<"Sum is:"<<sum;
}
int main(){
    int p=40;
    int q=60;
    
addition(p,q);
 
   return 0;
} 

#include<iostream>
using namespace std;

int add(int p,int q);
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}
int add(int p,int q){
    int sum=p+q;
    return sum;
} 
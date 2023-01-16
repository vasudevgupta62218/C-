 #include<iostream>
using namespace std;
int add(int a,int &b,int &c){
    b=10,c=20;
  int sum = a+b+c;
  cout<<sum<<" "<< &b<<endl;
}
int main(){
    int p=2;
    int q=4;
    
    cout<<add(2,p,q)<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int add(int a,int b,int c){
    b=10,c=20;
    cout<<b<<" "<<c<<endl;
  return a+b+c;
}
int main(){
    int p=2;
    int q=4;
    
    cout<<add(2,p,q)<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    return 0;
} 

#include<iostream>
using namespace std;

int changevalue(int n1){
    int ans=100;
    n1=ans;
    return n1;
}
int main(){
    int a;
    cin>>a;
    cout<<changevalue(a)<<endl;
    return 0;
} 

#include<iostream>
using namespace std;

int changevalue(int n1){
    int ans=100;
    ans=n1;
    return n1;
}
int main(){
    int a;
    cin>>a;
    cout<<changevalue(a)<<endl;
    return 0;
} 
                                 //Assignment
                                 
  #include<iostream>
 #include<cmath>
 using namespace std;

 void square(int n){
    for(int i=1;i<=n;i++){
        cout<<pow(i,2)<<endl;
    }
 }
 int main(){
    int n1;
    cin>>n1;
    square(n1);
    return 0;
 }   

 #include<iostream>
 using namespace std;

 double pi=(3.14);
 
 void area(double r){
    double ar= pi*r*r;
    cout<<"Area is:"<<ar<<endl;
 }

void circum(double r){
    double cr= 2*pi*r;
    cout<<"Circumfrence is:"<<cr<<endl;
}

 int main(){
    double r;
    cout<<"Enter the radius:";
    cin>>r;
    area(r);
    circum(r);
    cout<<pi;
    return 0;
 } 

 #include<iostream>
 using namespace std;

 void eligible(int a){
    if(a>=18){
        cout<<"The Person is eligible to vote."<<endl;
    }else{
        cout<<"Not eligible"<<endl;
    }
 }
 int main(){
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    eligible(age);
    return 0;
 } 

 #include<iostream>
 using namespace std;

 bool prime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
 }

 int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
 } 

 #include<iostream>
 using namespace std;

 bool odd(int n1){
    
        if(n1%2!=0){
            return true;
        }
     return false;
 }

 int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(odd(i)){
            cout<<i<<" ";
        }
    }
 } 

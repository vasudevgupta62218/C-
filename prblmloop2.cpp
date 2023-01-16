#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:-";
    cin>>n;

    int digits=0;
    while(n>0){
        digits++;
        n=n/10;

    }
    cout<<digits<<endl;
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    while(n>0){
   int lastdigit= n%10;
   sum+=lastdigit;
   n/=10;
}
cout<<sum<<endl;
return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
     int lastdigit = n%10;
     reverse=reverse*10+lastdigit;
     n/=10;
    }
    cout<<reverse<<endl;
     return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int sum=0;
for(int i=1;i<=n;i++){
    sum+=(pow((-1),(i-1)))*i;
}
cout<<sum<<endl;
return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++){
      if(i%2==0){
        sum-=i;
      }else{
        sum+=i;
      }  
    }
    cout<<sum<<endl;
    return 0;
} 

#include<iostream>;
using namespace std;
int main(){
    int n;
    cin>>n;

    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    cout<<fact<<endl;
    }
    return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cout<<"Enter number:",cin>>n;
    cout<<"Enter Power:",cin>>p;
    cout<<"The result is: "<<pow(n,p)<<endl;
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"Enter number:",cin>>n;
    cout<<"Enter Power:",cin>>p;

    int result=1;
    for(int i=1;i<=p;i++){
        result*=n;
    }
    cout<<result<<endl;
    return 0;
}


    
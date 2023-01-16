#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    int i=0;
    while(n>0){
        int lastdigit=n%10;
        lastdigit*=pow(2,i);
        i++;
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

    int sum=0;
    int pow=1;
    while(n>0){
        int lastdigit=n%10;
        lastdigit*=pow;
        pow*=2;
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
    int pow=1;
    while(n>0){
     int parity = n%2;
     reverse=reverse+parity*pow;
     pow*=10;
     n/=2;
    }
    cout<<reverse<<endl;
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    int pow=1;
    int reverse=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    while(sum>0){
        int parity=sum%2;
        reverse=reverse+parity*pow;
        pow*=10;
        sum/=2;
    }
    cout<<reverse<<endl;
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int reverse=0;
    int pow=1;
    while(n>0){
        int parity=n%2;
        reverse=reverse+parity*pow;
        pow*=10;
        n/=2;
    }
    cout<<reverse<<endl;
    int count=0;
    while(reverse>0){
        int lastdigit=reverse%10;
        if(lastdigit==0){
            count++;
        }
        reverse/=10;
    }
    cout<<"Number of 0's:"<<count<<endl;
    return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;

    int sum1=0,sum2=0;
    int i=0,j=0;

    while(n1>0){
        int lastdigit1=n1%10;
        lastdigit1*=pow(2,i);
        i++;
        sum1+=lastdigit1;
        n1/=10;
    }
    while(n2>0){
         int lastdigit2=n2%10;
         lastdigit2*=pow(2,j);
         j++;
         sum2+=lastdigit2;
         n2/=10;
    }
    cout<<sum1<<","<<sum2<<endl;

     if(sum1>sum2){
        cout<<"the greatest number is:"<<sum1<<endl;
     }else{
        cout<<"the greatest number is:"<<sum2<<endl;
     }
   return 0;
}
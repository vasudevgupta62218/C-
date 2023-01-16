#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ",cin>>n;
    
    int sum=0;

    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"the sum is:"<<sum;
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:",cin>>n;
    int sum=0;
    int i=1;
    for(i;i<=n;i++){
         sum+=i;
    }
    cout<<"The sum is:"<<sum<<endl;
    cout<<"Thanku";

    return 0;
}   

#include<iostream>
using namespace std;
int main(){
    int i=1;
    int p;
   while(i<=10){
         p=i*5;
         if(p%7==0){
            break;
         }    
         i++;
    }
    cout<<p;
    return 0;
}  

#include<iostream>
using namespace std;
int main(){
    for(int i=5;;i+=5){
      if(i%7==0){ 
        cout<<i<<endl;
      break; 
    }
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    do{
        sum+=i;
        i++;
    }while(i<=n);

    cout<<sum;
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
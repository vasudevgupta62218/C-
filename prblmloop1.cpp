/*#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter no of rows:",cin>>row;
    cout<<"Enter no of columns:",cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int row,col;
    int i,j;
    cout<<"Enter no. of rows:",cin>>row;
    cout<<"Enter no. of columns:",cin>>col;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
         if( i==1 || j==1 || i==row || j==col){
            cout<<"*";
         }else{
            cout<<" ";
         }
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int row,col;
    int i,j;
cout<<"Enter the row:",cin>>row;
cout<<"Enter the col:",cin>>col;
 for(i=1;i<=row;i++){
    for(j=1;j<=col;j++){
        if(i>=j){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
 return 0;
} */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.:",cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
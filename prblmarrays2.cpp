                           //Problem on arrays-2
//Pattern:Two Pointers
//Sort an array consisting of only 0s and 1s.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    cout<<"formerly: ";
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
     int count0=0;
     int count1=0;
    for(int i=0;i<n;i++){
       if(v[i]==0){
        count0++;
       }else{
        count1++;
       }
    }
    
    vector<int>v1(n);
     for(int i=0;i<count0;i++){
       v1[i]=0;
     }
     for(int i=count0;i<n;i++){
        v1[i]=1;
     }
     cout<<"Now: ";
     for(int ele:v1){
        cout<<ele<<" ";
     }
       return 0; 
     
} 
        //OR
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int count=0;
    for(int ele:v){
        if(ele==0){
            count++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<count){
            v[i]=0;
        }else{
            v[i]=1;
        }
    }
    cout<<"Now: ";
    for(int ele:v){
        cout<<ele<<" ";
    }
}        
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<endl;
    cout<<"Formerly: ";
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    sort(v);
    return 0;
} 
            //OR
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){ 
    int leftpoint=0;
    int rightpoint=v.size()-1;

    while(leftpoint<rightpoint){
        if(v[leftpoint]==1 && v[rightpoint]==0){
            v[leftpoint++]=0;
            v[rightpoint--]=1;
        }
        if(v[leftpoint]==0){
            leftpoint++;
        }
        if(v[rightpoint]==1){
            rightpoint--;
        }
    }
    return;           
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<endl;
    cout<<"Formerly: ";
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    sort(v);
    cout<<"Now: ";
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
} 

//Given an array of integers, move all the even integers 
//at the beginning of the array followed by all the odd integers.

#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int leftpt=0;
    int rightpt=v.size()-1;
    //int swap=0;
    while(leftpt<rightpt){
        if(v[leftpt]%2==1 && v[rightpt]%2==0){
           // swap=v[rightpt];
          //  v[rightpt--]=v[leftpt];      
          //  v[leftpt++]=swap; 
            swap(v[leftpt],v[rightpt]);
            leftpt++;rightpt--;
        }
            
        if(v[leftpt]%2==0){
            leftpt++;
        }
        if(v[rightpt]%2==1){
            rightpt--;
        }
        }
        return;
    }

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    sort(v);
    cout<<"New: ";
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
}  

//Given an integer array sorted in non-decreasing order,
// return an array of the squares of each number sorted in non-decreasing order.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int square(vector<int>&v){
    int l=0;
    int r=v.size()-1;
  vector<int>v1;
    for(int i=0;i<v.size();i++){
        v1.push_back(pow(v[i],2));
    }

    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v1[i]>v1[j]){
                swap(v1[i],v1[j]);

            }
        }
    }
    for(int ele:v1){
        cout<<ele<<" ";
    }
  return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"New: ";
    square(v);
    return 0;

}


                                  //Problem on arrays-3
        //Pattern: Prefix Sum/Running Sum  
//Given an integer array "a", return the prefix sum in the same array without creating a new array.
#include<iostream>
#include<vector>
using namespace std;
void prefix(vector<int>&v){
    
    for(int i=1;i<v.size();i++){
      v[i]=v[i-1]+v[i];   
    }
    for (int ele:v){
        cout<<ele<<" ";
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
    cout<<"Now: ";
    prefix(v);
     return 0;
} 

//Check if we can partition the array into two subarrays with equal sum.
//More formally, check that the prefix sum of a the array is equal to the 
//suffix sum of rest of the array.
#include<iostream>
#include<vector>
using namespace std;
bool partition(vector<int>v){
    int prefixsum=0;
    int suffixsum=0;
    int totalsum=0;
    for(int i=0;i<v.size();i++){
        totalsum+=v[i];
    }
    cout<<"Totalsum: "<<totalsum<<endl;
       for(int j=0;j<v.size();j++){
        prefixsum+=v[j];
        suffixsum= totalsum-prefixsum;
        if(prefixsum==suffixsum){
            break;
        }
       }
    
    cout<<"Prefixsum: "<<prefixsum<<endl;
    cout<<"Suffixsum: "<<suffixsum<<endl;
    if(prefixsum==suffixsum){
        return true;
    }
    return false;
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
    if(partition(v)){
        cout<<"True, we can make two subarrays with equal sums.";
    }else{
        cout<<"False, we cannot make two subarrays with equal sums.";
    }
    return 0;
} 

//Given an array of integers of size n, answer "q" queries where you need to print the sum of values in a
//given range of indices from l to r both included.
//Note: The value of l and r in queries follow 1-based indexing.

#include<iostream>
#include<vector>
using namespace std;
int prefixsums(vector<int>v,int l,int r){
    int prefixsumr=0;
    int prefixsuml=0;
    for(int i=0;i<l-1;i++){
       prefixsuml+=v[i]; 
    }
    for(int i=0;i<r;i++){
        prefixsumr+=v[i];
    }

    return prefixsumr-prefixsuml; 
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
    int q;
    cout<<"Enter no. of queries: ";
    cin>>q;

    while(q--){
        int l,r;
        cout<<"Enter intial limit & upper limit: ";
        cin>>l>>r;
        cout<<endl;
        cout<<prefixsums(v,l,r)<<endl;
        
    }
    return 0;
}
      //OR 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    cout<<endl;
    //calculating prefix sum array;
    for(int i=1;i<n;i++){
        v[i]=v[i-1]+v[i];
    }
    int q;
    cout<<"Enter no. of queries: ";
    cin>>q;

    while(q--){
        int l,r;
        cout<<"Enter intial limit & upper limit: ";
        cin>>l>>r;
        cout<<endl;
        int ans;
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}

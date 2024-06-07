
 //inbuilt sorting function for vectors
/*
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<float>v;
    v={0.5,0.74,20.56,0.64,0.9,0.68,1};
    sort(v.begin(),v.end());
    for(auto ele:v){
        cout<<ele<<" ";
    }
    return 0;
}   */

//bucket sort
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void bucketsort(float arr[], int size){
//step1: Creating buckets(itself vector) to store values in chain(vector):
vector<vector<float>>bucket(size,vector<float>());

//step2: Inserting values into bucket:
for(int i=0;i<size;i++){
    int index=arr[i]*size;  //since we have decimal values.
    bucket[index].push_back(arr[i]);
}

//step3: Sorting buckets:
for(int i=0;i<size;i++){
    if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
    }
}

//step4: Combining elements from buckets:
int k=0;
for(int i=0;i<size;i++){
    for(int j=0;j<bucket[i].size();j++){
        arr[k++]=bucket[i][j];
    }
}
return;
}
int main(){
    
    float arr[]={0.13,0.24,0.78,0.56,0.98,0.45};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    bucketsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
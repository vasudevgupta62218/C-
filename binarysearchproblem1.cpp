//Question1] Given a sorted array, Find the First and last occurence of the target element.

#include<iostream>
using namespace std;
int firstlastexistence(int arr[],int begin,int end,int target){
    int first;
    int last;
    if(begin>=end){
        cout<<-1;
        return 0;
    }
    int mid=begin+(end-begin)/2;
    if(arr[mid]==target){
        first=last=mid;
        for(int i=mid-1;i>=0;i--){
            if(arr[i]==arr[mid]){
                first=i;
            }
        }
        for(int i=mid+1;i<=end;i++){
            if(arr[i]==arr[mid]){
                last=i;
            }
        }
        cout<<first<<" "<<last;
        return 0;
    }
    else if(target<arr[mid]){
        firstlastexistence(arr,begin,mid-1,target);
    }
    else{
        firstlastexistence(arr,mid+1,end,target);
    }
    return 0;
}
int main(){
    int arr[]={0,1,2,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target=2;
    firstlastexistence(arr,0,n-1,target);
    return 0;
}    

//Question2] Given a rotated sorted array, Find the index of the minimum element in the array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotation(int arr[],int n,int r){
    for(int i=1;i<=r;i++){
        for(int j=0;j<n-1;j++){
            swap(arr[j],arr[j+1]);
        }
    }
    return;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int r=2;
    rotation(arr,n,r);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index=-1;
    int target=*min_element(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index=i;
            cout<<index;
        }
      }
      if(index==-1){
        cout<<"Not Exist";
      }
    return 0;
}


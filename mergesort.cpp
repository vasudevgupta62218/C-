#include<iostream>
using namespace std;
void merge(int arr[],int begin,int mid,int end){
    int an=mid-begin+1;
    int bn=end-mid;
    //create 2 temp arrays
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[begin+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0; //initial index of first subarray
    int j=0; //initial index of second subarray
    int k=begin; //initial index of merged subarray
    
    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
    return;
}
void mergesort(int arr[],int begin,int end){
   
     //base
       if(begin>=end){
        return;
       } 
     
     int mid=(begin+end)/2;
     mergesort(arr,begin,mid);
     mergesort(arr,mid+1,end);
     merge(arr,begin,mid,end);
     return;
}
int main(){
    int arr[]={5,4,3,2,1,0};
   int n=sizeof(arr)/sizeof(arr[0]);
    int begin=0;
    int end=n-1;
    
    mergesort(arr,begin,end);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
                    //Binary Search always applied on sorted array.


#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    int j=first;
    for(;j<last;j++){
         if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
         }
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}
void quicksort(int arr[],int first,int last){
    //base
    if(first>=last){
        return;
    }
    int pivot=partition(arr,first,last);
    quicksort(arr,first,pivot-1);
    quicksort(arr,pivot+1,last);

    return;
}

int binarysearch(int arr[],int begin,int end,int target){
       quicksort(arr,begin,end);
          //base
      if(begin>end){
        cout<<"Not Present in data";
        return 0;
      }
      int mid=(begin+end)/2;
      if(target==arr[mid]){
        cout<<arr[mid]<<" at index: "<<mid;
      }
      else if(target<arr[mid]){
        binarysearch(arr,begin,mid-1,target);
      }
      else if(target>arr[mid]){
        binarysearch(arr,mid+1,end,target);
      }

return 0;
}

int main(){
    int arr[]={10,2,6,5,9,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter Target Value: "<<endl;
    cin>>target;
    binarysearch(arr,0,n-1,target);

    return 0;
} 

//Question1] Find the occurence of a given element x, given that the array is sorted.
// Input: [2,5,5,5,6,6,8,9,9,9]
//search: 5
//output: 1

#include<iostream>
using namespace std;
int firstoccur(int arr[],int begin,int end,int target){
  if(begin>end){
    return -1;
  }
  int mid=begin+(end-begin)/2;
  if(arr[mid]==target){
     return mid;
  }
  if(target<arr[mid]){
     firstoccur(arr,begin,mid-1,target);
  }
  else{
     firstoccur(arr,mid+1,end,target);
  }
}

int main(){
  int arr[]={2,5,5,5,6,6,8,9,9,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=6;
  cout<<firstoccur(arr,0,n-1,target);
 return 0;
} 

//Find the square root of the given non-negative value x. Round it off to the nearest floor integer value.

#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
/*int main(){
  int x=1000000;                //BASIC
  cout<<floor(sqrt(x));
} */ 

    // within the range [1,x], find the biggest value whose square is less than or equal to x.
int sqrt(int x){
   int begin =1;
   int end=x;
   int ans;
   while(begin<=end){
        int mid=begin+(end-begin)/2;
       if((mid*mid)<=x){
        ans =mid;
        begin=mid+1;
       }
       
       else{
        end=mid-1;
       }
   }
   return ans;
}
int main(){
  int x=11  ;
  cout<<sqrt(x);
  return 0;
}
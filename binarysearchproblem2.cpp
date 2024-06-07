//Given a mountain array of length greater than 3, return the index i such that 
//arr[0]<arr[1]<arr[2].......<arr[i-1]<arr[i]>arr[i+1]>...>arr[arr.length-1]. This index is known as the peak index.
//Input: [0,4,1,0]

#include<iostream>
using namespace std;
int peakindex(int arr[],int begin,int end){
    if(begin>end){
        cout<<-1;
        return 0;
    }
    int mid=begin+(end-begin)/2;
    int peak_idx,peak;
    if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
        peak=arr[mid];
        peak_idx=mid;
        cout<<peak<<" at index: "<<peak_idx<<endl;
    }
    else if(arr[mid]<arr[mid+1]){
        peakindex(arr,mid+1,end);
    }
    else if(arr[mid]<arr[mid-1]){
        peakindex(arr,begin,mid-1);
    }
    
    return 0;
    }


int main(){
    int arr[]={1,2,1,2,6,10,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    peakindex(arr,0,n-1);
    return 0;
}     

//Binary Search on 2-D array
#include<iostream>
#include<vector>
using namespace std;
bool binarysearch2darray(vector<vector<int>>v,int target){
    int n=v.size(); //no. of rows
    int m=v[0].size(); //no. of columns
    int begin=0;
    int end=n*m-1;
    while (begin<=end)
    {
        int mid=begin+(end-begin)/1;
        int row_cordinate=mid/m;
        int col_cordinate=mid%m;
        if(v[row_cordinate][col_cordinate]==target){
            return true;
        }
        else if(v[row_cordinate][col_cordinate]>target){
                end=mid-1;
        }
        else {
            begin=mid+1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>v={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=15;
    cout<<binarysearch2darray(v,target)<<endl;
    return 0;
}
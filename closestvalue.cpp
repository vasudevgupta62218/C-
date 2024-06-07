
// #include<iostream>
// using namespace std;
// int closestvalue(int n,int k,int arr[]){
//     int closest=arr[0];
//     int dist=abs(arr[0]-k);
//     for(int i=1;i<n;i++){
//         if(dist>abs(arr[i]-k)){
//              dist=abs(arr[i]-k);
//              closest=arr[i];
//         }

//         else if(dist==abs(arr[i]-k)){
//             int newclosest=arr[i];
//             closest=max(closest,newclosest);
//         }
//     }

//     return closest;
// }
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int ele:arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     cout<<closestvalue(n,k,arr);
//     return 0;

// }






#include<iostream>
using namespace std;
int main(){
    cout<<"ascii value of 'a' is: "<<int('a');
    return 0;
}
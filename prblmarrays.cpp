//find the number of pairs in the array whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int>v,int x){
    int count=0;
    
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
        if(v[i]+v[j]==x){
         count++;
        }
    }
    }
      return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;
     int x;
     cin>>x;
     cout<<endl;
     cout<<"number of pairs: "<<sum(v,x);
     return 0;
}  

//count the number of triplets whose sum is equal to given value x.
#include<iostream>
#include<vector>
using namespace std;
int triplet(vector<int>v,int x){
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                if(v[i]+v[j]+v[k]==x){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    int x;
    cin>>x;
    cout<<endl;
    cout<<"no. of triplets: "<<triplet(v,x);
    return 0;
} 

//find the unique number in the given array where all the elements are being 
//repeated twice with one value being unique. 
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
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"Checking"<<endl;
    
    
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                v[i]=v[j]=0;
            }
        }
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
         cout<<v[i]<<" ";
        }
    }
    
    return 0;
} 

//find the second largest element in the given array.
#include<iostream>
#include<vector>
using namespace std;
int flarge(vector<int>v){
    int flarge=v[0];
    for(int i=1;i<v.size();i++){
        if(flarge<v[i]){
          flarge=v[i];
        }
    }
    cout<<"First largest: "<<flarge<<endl;
    for(int i=0;i<v.size();i++){
        if(flarge==v[i]){
            v[i]=0;
        }
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
     cout<<endl;
    int slarge=v[0];
    for(int i=1;i<v.size();i++){
        if(slarge<v[i]){
            slarge=v[i];
        }
    }
    return slarge;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"second largest: "<<flarge(v);
    return 0;

} 

//rotate the given array by k steps where k is non-negative.
//Note: "k" can be greater than n as well where n is the size of array.
             //Method-1
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    cin>>k;
    k%=n;
    int newarray[n];
    int j=0;
    for(int i=n-k;i<n;i++){
        newarray[j]=array[i];
        j++;
    }
    for(int i=0;i<=k;i++){
        newarray[j]=array[i];
        j++;
    }
    for(int ele:newarray){
        cout<<ele<<" ";
    }
    
    return 0;
} 
          //Method-2
#include<algorithm>                   
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    
    vector<int>v={1,2,3,4,5};
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    int k=2;
    k%=v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}  

//Given Q queries, check if the given number is present in the array or not.
//Note: Value of all the elements in the array is less than 10 to the power 5.
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

     const int N= 1e5+10;
    vector<int>freq(N,0);

    for(int i=0;i<n;i++){
        freq[v[i]]++;              //frequency vector
    }

    int q;
    cout<<"enter queries: "<<endl;
    cin>>q;

    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<"time"<<endl;
    }
    return 0;

}

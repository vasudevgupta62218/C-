                                                        //Bubble Sort Algorithm

#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
    return;
}

int main(){
   /* int n;
    cout<<"Enter the vector size(n): ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the vector: ";
    for(int a=0;a<n;a++){
    cin>>v[a];
    }
    cout<<"old vector: ";
    for(int b=0;b<n-1;b++ ){
        cout<<v[b]<<" ";
    }
    cout<<endl; */
    vector<int>v;
    v={10,9,5,7,6,2,1,3};
    
cout<<"Sorted vector: ";

     bubblesort(v);
return 0;
} 
                                                     //Optimum BubbleSort Algo.

#include<iostream>
#include<vector>
using namespace std;
void optimumbs(vector<int>v){
    int flag =0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
        else{
            flag=0;
        }
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
    return;
}
int main(){
    vector<int>v;
    v={5,4,3,2,1};
    optimumbs(v);
    return 0;
}
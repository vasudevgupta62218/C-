#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>v){
  for(int i=1;i<v.size();i++){
    int current =v[i];
    int j =i-1;
    while(j>=0 && v[j]>current){
        v[j+1]=v[j];
        j--;
    }
    v[j+1]=current;
  }
    for(int ele:v){
        cout<<ele<<" ";
    }
    return;
}

int main(){
    vector<int>v;
    v={10,8,9,7,5,6};
    insertionsort(v);
    return 0;
}
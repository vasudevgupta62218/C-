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
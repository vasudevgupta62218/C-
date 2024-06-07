#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>v){
    for(int i=0;i<v.size()-1;i++){
        int min =i;
        for(int j=i+1;j<v.size();j++){
            if(v[min]>v[j]){
                min=j;
            }
        }
        if(min!=i){
           swap(v[i],v[min]);
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
    selectionsort(v);
    return 0;
}
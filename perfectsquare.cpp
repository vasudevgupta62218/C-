//Checking for perfect square:-

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<endl;
    double sqrt=pow(n,0.5);
    cout<<"Square Root of "<<n<<" is: "<<sqrt<<endl;
    for(int i=0;i<=sqrt;i++){
    if(i==sqrt){
        cout<<" It's a Perfect Square."<<endl;
         return 0;
    }
}
cout<<"Not a Perfect Square."<<endl;

return 0;
} 

//Looking for Perfect Square in an array
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void perfectsquare(vector<int>v){

     int max=0;
     for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
     }
     int sqrtmax=pow(max,0.5);
     
       for(int i=0;i<v.size();i++){
        double sqrt=pow(v[i],0.5);
        for(int j=1;j<=sqrtmax;j++){
        if(j==sqrt){
            cout<<v[i]<<" is a perfect square in your vector."<<endl;
            break;
        }
       }
       }
        return;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the vector: "<<endl;
    cin>>n;
    cout<<"Enter the elements of vector: "<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"The vector you entered is: "<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"Output: "<<endl;
    perfectsquare(v);
    cout<<"Note: If you do not get any output then vector does not contain any perfect square.";
    return 0;

} 
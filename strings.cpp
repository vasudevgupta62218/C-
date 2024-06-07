#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter line: "<<endl;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}

//Given a string, sort the given string.
// The given string only contain the alphabets a-z

#include<iostream>
#include<string>
#include<vector>
using namespace std;
string bucketsort(string str){
      //frequency vector
      vector<int>frequency(26,0);

      //storing frequencies in it
      for(int i=0;i<str.length();i++){
        int index=str[i]-'a';
         frequency[index]++;
      }

      //creating sorted string
      int j=0;
      for(int i=0;i<26;i++){
        while(frequency[i]--){
            str[j++]=i+'a';
        }
      }
      return str;
}
int main(){
    string str;
    cout<<"Write the string: "<<endl;
    cin>>str;
    cout<<bucketsort(str)<<endl;
    return 0;
}         

//Question:- Given two string, check either they are anagram or not.

#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool anagram(string s,string t){
     //Creating Frequency vector
     vector<int>freq(26,0);

     if(s.length()!=t.length()){
      return false;
     }

     //Storing frequencies in it
     for(int i=0;i<s.length();i++){
      freq[s[i] -'a']++;
      freq[t[i]-'a']--;
     }

    // Creating Sorted array
      for(int i=0;i<26;i++){
        if(freq[i]!=0){
          return false;
        }
      }
     return true;
}
int main(){
  string s,t;
  cout<<"Enter First string: "<<endl;
  cin>>s;
  cout<<"Enter second string: "<<endl;
  cin>>t;
  if(anagram(s,t)){
         cout<<"Strings are anagrams.";
  }
  else{
    cout<<"Strings are not anagrams.";
  }
   return 0;
}        

//Given two strings s and t, are they isomorphic.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isIsomorphic(string s,string t){
  //creating frequency vector
     vector<int>v1(128,-1);
     vector<int>v2(128,-1);

     if(s.length()!=t.length()){
      return false;
     }

     for(int i=0;i<s.length();i++){
        if(v1[s[i]] != v2[t[i]]){  //checking if value of character at index i matches in both vector.
          return false;
        }
        v1[s[i]]=v2[t[i]]=i;  //storing string position in vectors for characters at index i.
     }
     return true;
}
int main(){
  string s,t;
  cin>>s>>t;

  if(isIsomorphic(s,t)){
    cout<<"Strings are isomorphic.";
  }
  else{
    cout<<"Strings are not isomorphic.";
  }

   return 0;
}   


#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string>v;
  v={"ant","anti","anthem","antitheftf","antique"};

  sort(v.begin(),v.end());
  for(string ele:v){
    cout<<ele<<" ";
  }
  cout<<endl;
  string first=v[0];
  string last=v[v.size()-1];
  string ans;
  for(int i=0;i<min(first.length(),last.length());i++){
    if(first[i]==last[i]){
      ans+=first[i];
    }
    else{
      break;
    }
  }
  if(ans == ""){
    cout<<"None_of_these";
  }
  cout<<ans;
  return 0;
}  

//Question:- Decode the following strings.
//Input: 2[b]  Output: bb
//Input: 3[b2[ca]] Output: bcacabcacabcaca


#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
string decodedstring(string s){
    string result;

    
    for(int i=0;i<s.length();i++){
      //traversing the encoded string
      if(s[i]!=']'){
          result.push_back(s[i]);
          
      }
      else{
        //extract str from result
        string str="";
        while(!result.empty() && result.back()!='['){
            str.push_back(result.back());
            result.pop_back();
        }
        //reversing the str
        reverse(str.begin(),str.end());

        //remove last char from result which is ]
        result.pop_back();

        //extract num from result
        string num="";
        while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                   num.push_back(result.back());
                   result.pop_back();
        }
        //reverse the num string
        reverse(num.begin(),num.end());

        //convert string to integer
        int int_num= stoi(num);

        //inserting str in result int_num times
        while(int_num){
          result+=str;
          int_num--;
        }
      }
    }
    return result;
    }

int main(){
  string s;
   cin>>s;

   cout<<decodedstring(s)<<endl;
  return 0;
}  
                                                //SLIDING WINDOW TECHNIQUE                                                                                     
//Given a binary string and an integer k, return the maximum number of consecutive 1's in the string if you can flip atmost k 0's.

#include<iostream>
#include<string>

using namespace std;
int longest_ones(string str,int k){
  int start=0;
  int end=0;
  int zero_count=0;
  int max_length=0;

  for(;end<str.length();end++){
      if(str[end]=='0'){
        zero_count++;
      }

      while(zero_count>k){
        if(str[start]=='0') zero_count--;  //contracting window
        start++;
      }
      max_length=max(max_length,end-start+1);
  }
      return max_length;
}
int main(){
  string str;
  cout<<"Enter string: ";
  cin>>str;

  int k;
  cout<<"Enter the k: ";
  cin>>k;

  cout<<longest_ones(str,k);
  
  return 0;
}
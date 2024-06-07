                                                        //Sub-sequence
   //Given a string, we have to find out all its subsequences. 
   /* #include<iostream>
    #include<vector>
    using namespace std;

    void f(string &str , int i , string result , vector<string> &li){
        if(i==str.length()){
            li.push_back(result);
            return;
        }

        f(str,i+1,result+str[i],li);
        f(str,i+1,result,li);
    }
    int main(){
       vector<string> res;
        string str="abc";
        f(str ,0,"",res);
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        return 0;
    } */

    //Given a string containing digits from 2 to 9 inclusive, return all possible letter combination that the number could represent. 
    //Return the answer in any order.
    #include<iostream>
    #include<vector>
    using namespace std;
    void f(string &str, int i ,string result ,vector<string> &li ,vector<string> &keypad){
        if(i==str.size()){
            li.push_back(result);
            return;
        }
        int digit= str[i]-'0';
        if(digit<=1){
            f(str,i+1,result,li,keypad);
            return;
        }
        for(int j=0;j<keypad[digit].size();j++){
            f(str,i+1,result+keypad[digit][j],li,keypad);
            return;
        }

    }

    int main (){
        vector<string> keypad(10);
        keypad ={ "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string str = "23";
        vector<string> li;
        f(str,0,"",li,keypad);
        for(int i=0; i<li.size();i++){
            cout<<li[i]<<" ";
        }
        return 0;
    }
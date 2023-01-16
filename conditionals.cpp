#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    if (number%2==0)
    {
        cout<<"Even\n";
    }else{
        cout<<"Odd\n";
    }
    return 0;
    
}

#include<iostream>
using namespace std;
int main(){
 int age;
cout<<"Enter Age";
 cin>>age;

 if (age<12)
 {
    cout<<"Child"<<endl;
 }else if (age<=18)
 {
    cout<<"Teenager"<<endl;
 }else
 {
    cout<<"Adult";
 }
 
     return 0;
}

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Marks";
    cin>>marks;

    if (marks>33)
    {
        if (marks>80)
        {
            cout<<"Gracefully Pass"<<endl;
        }else{
            cout<<"Pass"<<endl;
        }
        }else{
            cout<<"Fail";
        }
        return 0;
    }

    #include<iostream>
    using namespace std;
    int main(){
        int marks;
        cout<<"enter marks";
        cin>>marks;
        marks>33? marks>80? cout<<"Grace\n":cout<<"Pass\n":cout<<"Fail";
        return 0;
    }

    #include<iostream>
    using namespace std;
    int main(){
        int val;
        cout<<"Enter Value";
        cin>>val;
        if ((val%2==0) & (val%3==0))
        {
            cout<<"The Value is: "<<val<<endl;
        }else{
            cout<<"Wrong Value";
        }
        return 0;
        
    }

    #include<iostream>
    using namespace std;
    int main(){
        int num;
        cin>>num;
        if ((num%3==0)||(num%5==0))
        {
            cout<<"You've entered correct number: "<<num<<endl;
        }else{
            cout<<"Wrong Number";
        }
        return 0;
        
        
    }

    #include<iostream>
    using namespace std;
    int main(){
         int day;
         cout<<"Enter Day Number: ";
         cin>>day;


        switch (day)
        {
        case 1:
            cout<<"Monday\n";
            break;

        case 2:
            cout<<"Tuesday\n";
            break;
        
        case 3:
            cout<<"Wednesday\n";
            break;

        case 4:
            cout<<"Thursday\n";
            break;

         case 5:
            cout<<"Friday\n";
            break;

         case 6:
            cout<<"Saturday\n";
            break;

         case 7:
            cout<<"Sunday\n";
            break;

         default :
            cout<<"Wrong Day Number";
            break;   
        }
        return 0;

    }

    #include<iostream>
    using namespace std;
    int main(){
        char alpha;
        cout<<"Enter Alphabet: ";
        cin>>alpha;

        switch (alpha)
        {
        case 'a':
            cout<<"Vowel\n";
            break;

        case 'e':
            cout<<"Vowel\n";
            break;    
        case 'i':
            cout<<"Vowel\n";
            break;
        case 'o':
            cout<<"Vowel\n";
            break;
        case 'u':
            cout<<"Vowel\n";
            break;

        default:
            cout<<"Consonant\n";
            break;
        }
        return 0;
    }

     #include<iostream>
    using namespace std;
    int main(){
        char alpha;
        cout<<"Enter Alphabet: ";
        cin>>alpha;
     if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
     {
        cout<<"Vowel\n";
     }else{
        cout<<"Consonant";
     }
      return 0;
    }

    #include<iostream>
    using namespace std;
    int main(){
        char op;
        float a,b;

        cout<<"enter operator(+,-,*,/): ";
        cin>>op;

        cout<<"enter two number: ";
        cin>>a>>b;

        switch (op)
        {
        case '+':
            cout<<a<<"+"<<b<<"="<<a+b;
            break;  
        case '-':
            cout<<a<<"-"<<b<<"="<<a-b;
            break;
        case '*':
            cout<<a<<"*"<<b<<"="<<a*b;
            break;
        case '/':
            cout<<a<<"/"<<b<<"="<<a/b;
            break;        
        default:
            cout<<"Error! WRONG OPERATOR";
            break;
        }
            return 0;
    }

    
    

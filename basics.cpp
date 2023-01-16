//Product
#include<iostream>
using namespace std;
int main(){
    int a,b;
    a=20;
    b=30;
int product= a*b;
cout<<"Product:"<<product;
return 0;
}

//ASCII value
#include<iostream>
using namespace std;
int main()
{
    cout<<"ASCII Value of U is "<< (int)'U'<<endl;
    return 0;
}

//Cube of a number
#include<iostream>
using namespace std;
int main(){
    int a = 2;
    cout<<a*a*a;
    return 0;
}

//size of a character
#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(char);
    return 0;
}

/*Using Void Function*/
#include<iostream>
using namespace std;
void fun(){
    cout<<"Hello";
    return;
}
int main(){
    fun();
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a=11;
    int r= (a>>1);
    cout<<r;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a=11;
    int r= (a<<2);
    cout<<r;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a=11;
    a=5;
    cout<<a++<<endl;
    int b=a++;
    cout<<b;
    return 0;
}




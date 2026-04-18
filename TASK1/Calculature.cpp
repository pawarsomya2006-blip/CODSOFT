#include <iostream>
using namespace std;
int main() {
    int a,b;
    char op;
cout<<"Enter first Number:";
    cin>>a;
cout<<"Enter second number:";
cin>>b;
cout<<"Enter operator(+,-,*,/):";
cin>>op;
if(op=='+')
cout<<"result="<<(a+b)<<endl;
else if(op=='-')
cout<<"result="<<(a-b)<<endl;
else if(op=='*')
cout<<"result="<<(a*b)<<endl;
else if(op=='/')
cout<<"result"<<(a/b)<<endl;
else 
cout<<"error";
return 0;
}

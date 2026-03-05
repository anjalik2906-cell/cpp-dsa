#include<iostream>
// header files are of two types 
// 1 sysytem header file: comes with the system.
// 2. user defined : wriiten by programmer
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //arithemetic operators
cout<<"operators in c++"<<endl;
cout<<"following are the operators"<<endl;
cout<<"the addition "<<a+b<<endl;
cout<<"the subtraction "<<a-b<<endl;

cout<<"the multiplication "<<a*b<<endl;

cout<<"the division "<<a/b<<endl;

cout<<"the modo division "<<a%b<<endl;
cout<<"the post increment "<<a++<<" "<<b++<<endl;
//a++ phele print karo phir value update karo
//eg a=4 becomes 5 here but val prints to be 4 only
cout<<"the post decrement "<<a--<<" "<<b--<<endl;
//a--phele print phir update
//a=5 previous increment print 5 but a=4 after --
cout<<"the pre increment "<<++a<<" "<<++b<<endl;
//here now a=4 gets added by 1 then printed as a=5
cout<<"the pre decrement "<<--a<<" "<<--b<<endl;
cout<<endl;
//a=5 gets decresed by 1 val printed as a=4

//Assignment operators--->assign values in var
// int a=3; int b=2;
// char='s';

// comparsion operators----->to compare
cout<<"following are comparsion operators"<<endl;
cout<<"the value of a==b "<<(a==b)<<endl;
cout<<"the value of a!=b "<<(a!=b)<<endl;
cout<<"the value of a<=b "<<(a<=b)<<endl;
cout<<"the value of a>=b "<<(a>=b)<<endl;
cout<<"the value of a>b "<<(a>b)<<endl;
cout<<"the value of a<b "<<(a<b)<<endl;
cout<<endl;
//logical operators
cout<<"following are logical operators"<<endl;
cout<<"the value of AND operator((a==b)&&(a>b)) "<<((a==b)&&(a>b))<<endl;
cout<<"the value of OR operator((a==b)||(a>b)) "<<((a==b)||(a>b))<<endl;
cout<<"the value of NOT operator(!(a==b)) "<<(!(a==b))<<endl;
    return 0;
}
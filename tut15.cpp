#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    if(m>=80 && m<=100){
        cout<<"A";
    }
     else if(m>=60 && m<=79){
        cout<<"B";
    }
    else if(m>=50 && m<=59){
        cout<<"C";
    }
    else if(m>=45 && m<=49){
        cout<<"D";
    }
     else if(m>=25 && m<=44){
        cout<<"E";
    }
     else{
        cout<<"Fail!!!!!!!!";
    }
    return 0;
}
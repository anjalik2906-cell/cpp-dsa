#include<iostream>
using namespace std;
int main(){
    //pointers--> datatype, holds the address of other variables
    int a=3;
    int* b=&a;
    cout<<b<<endl;
    cout<<&a<<endl;
    
    // &----> addrress of operator
    // *---> (value at)derefencing  of operator
    cout<<*b<<endl;

    // pointer to pointer variable
    int** c=&b;
    cout<<c;
    return 0;
}
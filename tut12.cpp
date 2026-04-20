#include<iostream>
using namespace std;
int main(){
    //pointers--> datatype, holds the address of other variables
    int a=3;
    int* b=&a;
    cout<<"the address of a "<<b<<endl;
    cout<<"the address of a "<<&a<<endl;
    
    // &----> addrress of operator
    // *---> (value at)derefencing  of operator
    cout<<"the address of b "<<*b<<endl;

    // pointer to pointer variable
    int** c=&b;
    cout<<"the address of b "<<c<<endl;
    cout<<"the address of c "<<*c<<endl;


    return 0;
}
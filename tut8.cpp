#include<iostream>
using namespace std;
int main(){
    //constants in c++
    const float a= 8.93;
    cout<<a<<endl; //endl is a manipulator
    int v=56,b=83,c=4;
    cout<<"val of v "<<setw(4)<<v<<endl;
    cout<<"val of b "<<setw(4)<<b<<endl;
    cout<<"val of c "<<setw(4)<<c<<endl;

    cout<<"val of v without setw "<<v<<endl;
    cout<<"val of b without setw "<<b<<endl;
    cout<<"val of c without setw "<<c<<endl;
    
    
    return 0;
}
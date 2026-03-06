#include<iostream>
#include<iomanip>
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
    //order precedence
    int w=3, t=8;
    int n= (w*t)+t-96+23;
    cout<<n;
    
    
    return 0;
}
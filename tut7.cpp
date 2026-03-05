#include<iostream>
using namespace std;
int c=48;
int main(){
    int a,b,c;
    cout<<"enter a "<<endl;
    cin>>a;
    cout<<"enter b "<<endl;
    cin>>b;
    c=a+b;
    cout<<"sum is "<<c<<endl;
    cout<<"global var c is "<<::c<<endl;

    float d = 34.4f;
    //f used here to specify that itis float ow by default 
    // comlpier read it as a double val
    long double e = 34.4l;
    cout<<"val of d "<<d<<" val of e is "<<e;

    return 0;
}
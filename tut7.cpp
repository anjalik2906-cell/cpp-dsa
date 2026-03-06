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

    //******float,double,lomg double literals */

    float d = 34.4f;
    //f used here to specify that itis float ow by default 
    // comlpier read it as a double val
    long double e = 34.4l;
    cout<<"val of d "<<d<<" val of e is "<<e;
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4f)<<endl;

    cout<<"the size of 34.4 is "<<sizeof(34.4l)<<endl;

    cout<<"the size of 34.4 is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4L)<<endl;

    //********reference variable****** */
    float x =78;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    //-----TYPECASTING----to convert one variable to another
    int u=45;
    float t=45.67;
    cout<<"the value of a is "<<float(u)<<endl;
    cout<<"the value of b is"<<int(t)<<endl;



    return 0;
}
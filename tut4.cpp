#include<iostream>
using namespace std;
int glo = 6; //global variable
void sum(){
    int a;
    cout<<glo;
}
/*dat types
1) built in (int,float, char,boolean,double)
2)derived(array, function, pointeer)
3)user defined(struct, user, enum)*/
int main()
{
    int a=13 , b=17;
    float pi=3.14;
    char c= 'd';
    // cout<<"here value of a is"<<a<<"\nvalue of b is"<<b<<endl;
    // cout<<"\n value of pi is"<<pi<<endl;
    // cout<<"\n value of c is"<<c<<endl;
    bool is_true =true;
    //true 1 false 0
    int glo =5; //local variable
    glo =63; //val gets updated of local var
    sum();
    cout<<glo<<is_true;
    return 0;
}
//var can have max 255 char
#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,87,54,74};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2]=32;   //value   of array can be changed
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //array print with the help of loops
    // for(int i =0; i<4; i++){
    //     cout<<"the marks of  "<<i<<" "<<marks[i]<<endl;
    // }

    //while loop
    int i=0;
    while(i<4){
       
        cout<<"the marks of  "<<i<<" "<<marks[i]<<endl;
         i++;

    }
    int* p=marks;
    cout<<"marks[0]"<<*p<<endl;
    cout<<"marks[1]"<<*(p+1)<<endl;
    cout<<"marks[2]"<<*(p+2)<<endl;
    cout<<"marks[3]"<<*(p+3)<<endl;



    return 0;
}
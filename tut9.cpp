#include<iostream>
using namespace std;
int main(){
    /*----basic control structure
    selection--entry-->act 1-->act 2--->exit
    sequence--->entry--->boolean--->two cases like tree
    loop--->entry--->cond 1 check--->loop (again on entry level)
    */
   int a;
   cout<<"enter your age da for partyyyy "<<endl;
   cin>>a;
   if(a<18){
    cout<<"baby boo not allowed"<<endl;
   }
   else if(a==18){
    cout<<"next year da"<<endl;
   }
   else{
    cout<<"oldies welcome to old age partyy";
   }
    return 0;
}
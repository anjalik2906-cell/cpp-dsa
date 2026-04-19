#include<iostream>
using namespace std;
int main (){
    //loops in cpp
    // 1-->for loop
    // syntax of for loop 
    // for(initialization, condition, updation){
    // loop body}
    // 2--->do-while loop 
    // 3--->while loop
    // while(condition):{
    //     statements;
    // }
    // int n;
    // cin>>n;
    // for(int i=0 ; i<n ; i++){
    //     cout<<i<<endl;
        
    // }
    // int x;
    // cin>>x;
    
    // while(x>0){
    //     x--;
    //     cout<<x<<endl;
        
    // }
    //example of infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    //do whie loop--->syntax
     /* do
    {
        statements;
     }while(condition);
        */
    //    int i=1;
    //    do    //loop runs atleast one time
    //    {
    //     cout<<i<<endl;
    //     i++;
    //    } while (i<=40);
       int n;
       cin>>n;
       for(int i=1; i<=10; i++){
        int c=n*i;
        cout<<c<<endl;
       }
       

    return 0;
}
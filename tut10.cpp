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
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cout<<i<<endl;
    }
    int x;
    cin>>x;
    
    while(x>0){
        x--;
        cout<<x<<endl;
        
    }

    return 0;
}
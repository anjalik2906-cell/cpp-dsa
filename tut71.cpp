#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    cout<<"the element of vector are "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int> v;

    int size, element;
    cout<<"enter the size of vector"<<endl;
    cin>>size;cout<<"enter the element of vector"<<endl;
    for(int i=0; i<size; i++){
        cin>>element;
        v.push_back(element);
    }
    cout<<"the element of vector are "<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<endl;
    }
    // v.pop_back();
    display(v);
    vector<int>:: iterator iter=v.begin();
    v.insert(iter, 566);
    display(v);
    
    return 0;
}
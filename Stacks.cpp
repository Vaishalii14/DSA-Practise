//stack implementation using vectors
#include<bits/stdc++.h>
using namespace std;
class Stack{
    vector<int>v;
    public:
    void push(int data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    int top(){
        return v[v.size()-1];
    }

};
int main() {
    Stack s;
    for(int i=1;i<=5;i++){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    s.pop();
    return 0;
}

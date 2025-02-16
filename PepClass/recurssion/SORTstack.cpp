#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> &s,int last){
    if(s.empty() || last>s.top()){
        s.push(last);
        return;}
        int temp = s.top();
        s.pop();
        insert(s,last);
        s.push(temp);
}
void Sort(stack<int> &s){
    if(s.empty()) return;
    int last = s.top();
    s.pop();
    Sort(s);
    insert(s,last);
}
int main(){
    stack<int> s;
    s.push(100);
    s.push(20);
    s.push(10);
    s.push(60);
    s.push(30);
    Sort(s);

cout<<"Sorted stack is: ";
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
    }
    
}
#include<iostream>
#include<stack>
using namespace std;
void deletee(stack<int> &s,int mid){
    if(s.size()==mid){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    deletee(s,mid);
    s.push(temp);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int mid= (s.size()%2==0? s.size()/2 : (s.size()+1)/2);

    deletee(s,mid);

cout<<"mid deleted element stack is: ";
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
    }
    
}
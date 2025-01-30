#include<iostream>
#include<queue>
// #include<stack>
using namespace std;

int main(){
    queue<int> q1;
    queue<int> q2;                
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    for(int i=0;i<q1.size();i++){

    while(q1.size()>1){
        q2.push(q1.front());
        q1.pop();
    }
    cout<<"stack pop :"<<q1.front()<<endl;
    q1.pop();
    q1=q2;
    while(!q2.empty()){
        q2.pop();
    }

    }
nn 
    // cout << q1.front() << endl;


}
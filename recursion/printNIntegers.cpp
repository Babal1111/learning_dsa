#include<iostream>
using namespace std;

int print(int n){
    if(n==0){
        cout<<0;
        return 0;
    }
    cout<<n;
    print(n-1);
}

void printFirstN(int n){
    if(n==0){
        return ;
    }
    printFirstN(n-1);
    cout<<n;
}

int main(){
    // print(5);
    // cout<<endl;
    cout<<"1 to n: ";
    printFirstN(5);

}

#include<iostream>
using namespace std;

// 9%10 = 9  single digit works like this

int sum(int n){
    if(n<10) return n;
    // if(n==0) return 0;  vi kr skde

    return (n%10)+ sum(n/10);
    // return sum(n/10) +n%10; vi kr skde

}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"The sum of the digits is :"<<sum(n)<<endl;
}
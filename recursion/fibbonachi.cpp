#include<iostream>
using namespace std;

int fibbo(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return (fibbo(n-1)+fibbo(n-2));


}

int main(){
    int n;
    cout<<"Enter the number of terms you want in the series"<<endl;
    cin>>n;
    cout<<"The "<<n<<"th terms of the Fibonacci series is"<<endl;
    cout<<fibbo(n);
    cout<<endl;

    for(int i=0;i<=n;i++){
        cout<<fibbo(i)<<" ";

    }

}
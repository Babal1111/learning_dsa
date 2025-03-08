#include<bits/stdc++.h>
using namespace std;

int main(){

    int n =501;
    if(n&1  == 1) cout<<"ODD"<<endl;
    else{
        cout<<"EVEN"<<endl;
    }

    //========

    int a = 20;
    int b = 20<<1; /// shifts bit to left (eqals to divided by 2)
    int c = 20>>1;  // shifts bit to right (eqals to multiplied by 2)

    cout<<a<<" "<<b<<" "<<c<<endl;

    int a1= 10;
    int a2=100;
    int c1 = a1^a2;
    int c2 = c1^a2;
    cout<<c1<<" "<<c2<<endl;

}
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

int main(){
    print(5);

}

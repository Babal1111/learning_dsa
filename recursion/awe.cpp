#include<iostream>

using namespace std;

int fibbo(int n){

if(n == 0 || n==1){
    return n;
}
else{
    return n*fibbo(n-1);

}
}

int main(){
    int n= 4;
    cout << fibbo(n) << endl;

}
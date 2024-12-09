#include<iostream>
using namespace std;

template <typename t>

t add(t x, t y){
    return x + y;
}

int main(){
    cout << add<int>(5, 7) << endl;

}
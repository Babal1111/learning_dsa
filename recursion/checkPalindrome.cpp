#include<iostream>

using namespace std;

bool isPalidrome(string str,int start,int end){

    // if(str[start]>=str[end]) return true;   aschi value compare krwa di thi, index karne the
    if(start>=end) return true;

    return((str[start]== str[end])&& isPalidrome(str,start+1,end-1));



}

int main(){

string str = "bbaabb";
cout << isPalidrome(str, 0, str.length()-1) << endl;

}
// ?
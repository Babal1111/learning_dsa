// #include<iostream>

// #include<cmath>
// using namespace std;

// // return the maximum nuber of pieces that can be cut into sizes of a,b,c only
// // there can be maximum ways, return the maximum number of rope that can be created

// int max_pieces(int n,int a, int b, int c) {

// if(n==0)  return 0;
// if(n<0) return -1;

// int res = max(max_pieces(n-a,a,b,c),max_pieces(n-b,a,b,c),max_pieces(n-c,a,b,c));


// if(n==-1) return -1;
// return res+1;
// }


// int main(){
//     int n = 10; //rope legth

// int a = 3; //size of piece a
// int b = 5; //size of piece b
// int c = 7; //size of piece c
// cout<<max_pieces(n,a,b,c)<<endl;



// }


#include<iostream>
#include<cmath>
using namespace std;

// return the maximum number of pieces that can be cut into sizes of a,b,c only
// there can be maximum ways, return the maximum number of rope that can be created

int max_pieces(int n, int a, int b, int c) {
    if (n == 0)  return 0;
    if (n < 0) return -1;

    int res1 = max_pieces(n - a, a, b, c);
    int res2 = max_pieces(n - b, a, b, c);
    int res3 = max_pieces(n - c, a, b, c);

    int res = max(max(res1, res2), res3);

    if (res == -1) return -1;
    return res + 1;
}

int main() {
    int n = 10; //rope length
    int a = 3; //size of piece a
    int b = 5; //size of piece b
    int c = 7; //size of piece c
    cout << max_pieces(n, a, b, c) << endl;
    return 0;
}
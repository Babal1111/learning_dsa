/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

bool sorted(int arr[], int size){
    bool f = false;
    for(int i=0;i<size-1;i++){
        
        if(arr[i]<arr[i+1]){
            f=true;
        }
      
        else {f = false;
            break;
        }
    }
    return f;
}

int main()
{
   int arr[5]={1,2,3,4,110};
   
   int l = sizeof(arr)/sizeof(arr[0]);
   
   if(sorted(arr,l)){
       std::cout << "the array is sorted(ascending)" << std::endl;
   }else{
        std::cout << "the array is not sorted" << std::endl;

   }

    return 0;
}
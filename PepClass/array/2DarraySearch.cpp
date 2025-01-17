#include<iostream>
using namespace std;
void arrSearchEfficient(int arr[][4],int m,int n,int target){
    int i = 0, j = n - 1;
    while (i < m && j >= 0) {
        if (arr[i][j] == target) {
            cout << "Element is present at index [" << i << "][" << j << "]";
            return;
            }
            else if (arr[i][j] > target) {
                j--;
                }
            else if (arr[i][j]< target){
                
            }
}
void arrSearch(int arr[][4],int m,int n,int target){

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                cout<<"element found at "<<i<<" "<<j<<endl;
                // break;
                return;
            }
    }
}
             cout<<"Element not found";

}

int main(){
    int arr[3][4] = {{0,1,2,3},
    {4,5,6,7},{8,9,10,11}};

    arrSearch(arr,3,4,1);


}
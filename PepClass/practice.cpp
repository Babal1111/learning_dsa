#include<iostream>
#include<string>
using namespace std;
// int max(int arr[],int n){
//     for(int i=0;i<7;i++){
//         if(arr[i]>arr[0]){
//             return arr[i];
//     }
// }

void arrayReverse(int arr[],int n){
    int j=n-1;
    for(int i=0;i<n;i++){
        if(i<j){int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        }

        
    }
        for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}

void targetSum(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"\n\nthe elements whose sum is "<<target<<" are "<<arr[i]<<" "<<arr[j]<<endl;
                cout<<"indexes are :"<<i<<" & "<<j;
            }
    }
}
}

void evenOdd(int arr[],int n){
    int countOdd=0,countEven=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        countEven++;

    }
    else{
        countOdd++;
    }
}

cout<<"\n\nEven elements are: "<<countEven<<endl;
    cout<<"Odd elements are: "<<countOdd<<endl;

    int evenIndex[countEven];
    int oddIndex[countOdd];
    int j=0,y=0;
    for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        
        evenIndex[j]=i;
        j++;


    }
    else{
        oddIndex[y]=i;
        y++;
    }
}
cout<<"\n the index of even element : ";
for(int i=0;i<countEven;i++){
    cout<<evenIndex[i]<<" ";
    }
cout<<"\n the index of odd element : ";
for(int i=0;i<countOdd;i++){
        cout<<oddIndex[i]<<" ";
        }


}

void arraySumAtIdex(int arr[],int n){
    int sum=0;
    for(int i=1;i<n;i++){
        sum =arr[i]+arr[i-1];
        arr[i]=sum;


    }
        for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}

void leftMinimum(int arr[],int n){
    int min=0;
    int arrL[n];
    for(int i=1;i<n;i++){
         for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
    min =arr[j];
    arrL[i]=min;
            }
            
         }
    }
        arrL[0]=0;

    for(int i=0;i<n;i++){
        cout<<arrL[i]<<" ";
        }


}


void palidrome(string b){
    int l = b.size();
    cout<<"\n length: "<<l<<endl;
    cout<<b;

    // reverse(b.begin(),b.end());

    for(int i=l-1;i>=0;i--)
    {cout<<b[i];
    }
    // cout<<b;
}



int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    cout<<"original array :{1,2,3,4,5,6,7} ";

    // cout<<"\nmax ele :\n"<<max(arr,7);

    // cout<<"\n palidrome: "<<endl;
    palidrome("abcde");



// int j=0;
//     do{
//         j++;
//         cout<<j;
//     }
//     while(j<10);

evenOdd(arr,7);
targetSum(arr,10,7);

int arr2[8] = {1,2,3,4,5,6,7,8};
cout<<"\n reversed array :{1,2,3,4,5,6,7,8} is: ";
arrayReverse(arr2,8);


int arr3[8] = {1,2,3,4,5,6,7,8};
cout<<"\n\n sum of the array at indexes :{1,2,3,4,5,6,7,8} is: ";

arraySumAtIdex(arr3,8);

 int arr4[7] = {1,2,0,4,5,6,7};

cout<<"\n\nleft minimum elements of the array :";
leftMinimum(arr4,7);

}

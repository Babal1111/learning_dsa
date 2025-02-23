#include<bits/stdc++.h>
// #include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    //  map<int,vector<int>> mapp;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
     int maxx=sum;
    for(int i=1;i<=n-k;i++){

        sum= sum-arr[i-1]+arr[i+k-1];
        maxx=max(maxx,sum);        

    }
    cout<<maxx;
    // for(int i=0;i<n;i++){
    //     vector<int> res;
    //     for(int j=i;j<n;j++){
    //         res.push_back(i);
    //     }
    // }

}
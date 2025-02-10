#include<iostream>
#include<vector>
using namespace std;

int fibbo(int n){
    vector<int> dp(n+1,-1);
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fibbo(n-1)+fibbo(n-2);
}
int fibboTabulation(int n){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    cout<<"fibbonachi  5th term: "<<fibbo(5);
    cout<<"\nfibbonachi  5th term: "<<fibboTabulation(5);

} // namespace std;

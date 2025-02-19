// 779. K-th Symbol in Grammar

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1) return 0;

        int rowLength = pow(2,n-1);
        int mid = rowLength/2;
        if(k<=mid){
            return kthGrammar(n-1,k);
        }
        else{
            return !kthGrammar(n-1,k-mid);
        }
        
    }
};
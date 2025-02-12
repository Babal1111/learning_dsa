public:
    int uniquePaths(int m, int n) {
        return noOfPath(0,0,m,n);
        
    }
    int noOfPath(int i,int j,int m,int n){
        if(i==m-1 && j==n-1){
            return 1;        
            }
        if(i>m-1 || j>n-1 ){
            return 0;
        }
        int right = noOfPath(i,j+1,m,n);
        int down = noOfPath(i+1,j,m,n);
        return right+down;
    }
};
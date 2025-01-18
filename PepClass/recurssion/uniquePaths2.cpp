// uniquepath2 leetcode


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        return  noOfPaths(obstacleGrid,0,0,m,n);
        
    }
    int noOfPaths(vector<vector<int>>& obstacleGrid,int i,int j,int m,int n){
        if(i>m-1 || j>n-1){
            return 0;
        }
        if(i==m-1 && j==n-1){
            return 1;
        }

        if(obstacleGrid[i][j]==1 ){
            return 0;

        }

        int right = noOfPaths(obstacleGrid,i,j+1,m,n);
        int left = noOfPaths(obstacleGrid,i+1,j,m,n);

        return right+left;
    }
};
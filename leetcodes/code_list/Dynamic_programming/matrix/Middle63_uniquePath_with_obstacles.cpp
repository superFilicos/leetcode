#include <vector>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <iostream>
// i am filicos , helloworld.
using namespace std;


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i = 0, j = 0;
        int m,n;
        m = obstacleGrid.size();
        n = obstacleGrid[0].size();

        vector<vector<int>> f(m,vector<int>(n));
        int p = 0;
        for (int i=0;i<n;i++){
            f[0][i] = 1;
        }
        for (int i=0;i<m;i++) f[i][0] = 1;

    }
};

int main(){
    Solution s;
    s.uniquePaths(3,7);
}

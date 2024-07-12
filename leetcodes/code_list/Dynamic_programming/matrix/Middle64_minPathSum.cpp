#include <vector>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <iostream>
// i am filicos , helloworld.
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i ,j ;
        int m = grid.size();
        int n = grid[0].size();
        for(i=1;i<m;i++){
            grid[i][0] += grid[i-1][0];
        }       
        for(j=1;j<n;j++){
            grid[0][j] += grid[0][j-1];
        } 
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                grid[i][j] += min(grid[i-1][j],grid[i][j-1]);
            }
        }
        cout << grid[m-1][n-1];
        return grid[m-1][n-1];
    }
};

int main(){
    Solution s;
    vector<vector<int>> f = {{1,2,3},{4,5,6}};
    s.minPathSum(f);
}
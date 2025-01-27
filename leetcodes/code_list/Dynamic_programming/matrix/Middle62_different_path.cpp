#include <vector>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <iostream>
// i am filicos , helloworld.
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> f(m,vector<int>(n));
        for (int i=0;i<n;i++){
            f[0][i] = 1;
        }
        for (int i=0;i<m;i++) f[i][0] = 1;

        for (int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                f[i][j] = f[i][j-1] + f[i-1][j];
            }
        }
        cout << f[m-1][n-1];
        return  f[m-1][n-1];
    }
};

int main(){
    Solution s;
    s.uniquePaths(3,7);
}

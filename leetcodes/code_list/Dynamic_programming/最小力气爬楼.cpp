#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> output;

        for (int i = 0;i<cost.size();i++) output.push_back(0);

        for(int i = 0;i<cost.size();i++){
            if (i==0 || i==1) output[i] = 0;
            else{
                output[i] = min(output[i-2]+cost[i-2],output[i-1]+cost[i-1]);
            }
        }
        cout << output[-1];
        return output[-1];
    }
};

// 输入：cost = [10,15,20]
// 输出：15
// 解释：你将从下标为 1 的台阶开始。
// - 支付 15 ，向上爬两个台阶，到达楼梯顶部。
// 总花费为 15 。
// int main(){
//     vector<int> cost = {10,15,20};
//     Solution s;    
//     s.minCostClimbingStairs(cost);
// }
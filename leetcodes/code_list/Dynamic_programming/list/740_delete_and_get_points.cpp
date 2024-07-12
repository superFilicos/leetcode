#include <vector>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <iostream>
// i am filicos , helloworld.
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(auto i : nums) cout<<i <<" ";
        cout << '\n';
        nums.push_back(-1);
        int current = nums[0];
        int count = 0;
        vector<int> output;
        output.push_back(0);
        for (auto i : nums){
            if (i != current){  
                output.push_back(count);
                if(i>current+1) output.push_back(0);
                current = i;
                count = i;
            }
            else{
                count += i;
            }
        }
        //for (auto i : output) cout<<i;
        output.push_back(-1);
        for (auto i : output) cout<<i<<' ';
        cout << get_score(output);
        return get_score(output);
    }  
    int get_score(vector<int>& nums){
        vector<int> output(nums.size()-1,0);
        for (int i=0;i<output.size();i++){
            if(i == 0 || i == 1) output[i] = nums[i];
            else{
                output[i] = max(output[i-1],output[i-2] + nums[i]);
            }
        }

        cout<<'\n';
        for (auto i : output) cout<<i<<' ';

        //cout << output[output.size()-1];
        return output[output.size()-1];
    }
};
int main(){
    Solution s;
    //vector<int> input = {10,8,4,2,1,3,4,8,2,9,10,4,8,5,9,1,5,1,6,8,1,1,6,7,8,9,1,7,6,8,4,5,4,1,5,9,8,6,10,6,4,3,8,4,10,8,8,10,6,4,4,4,9,6,9,10,7,1,5,3,4,4,8,1,1,2,1,4,1,1,4,9,4,7,1,5,1,10,3,5,10,3,10,2,1,10,4,1,1,4,1,2,10,9,7,10,1,2,7,5};
    vector<int> input = {3,4,2};
    s.deleteAndEarn(input);
    //s.deleteAndEarn(input);
}

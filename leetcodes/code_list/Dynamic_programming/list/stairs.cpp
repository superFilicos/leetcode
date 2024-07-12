#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n ==0 || n==1) return 1;
        else{
            vector<int> stairs;
            for(int i = 0 ; i<=n; i++)
            {
                stairs.push_back(0);
            }
            for(int i = 0 ; i<=n; i++)
            {
                if(i==0 || i==1) stairs[i] = 1;
                else stairs[i] = stairs[i-2] + stairs[i-1];
            }
        
            return stairs[n];
        }}
};



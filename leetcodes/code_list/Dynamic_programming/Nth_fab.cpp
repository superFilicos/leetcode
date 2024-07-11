#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    int tribonacci(int n) {
        vector<int> list;
        for (int i = 0 ; i <= n ; i++){
            if (i ==0) list.push_back(0);
            else if (i==1) list.push_back(1);
            else if (i == 2) list.push_back(1);
            else list.push_back(list[i-1]+list[i-2]+list[i-3]);
        }
        return list[n];
    }
};
#include <iostream>
#include <vector>

using namespace std;

bool f(int i, vector<int>nums, int ssf, int m,vector<vector<int>>& dp){
    
    if(i==nums.size()){
        if(ssf % m == 0)return 1;
        return 0;
    }

    if(dp[i][ssf]!=-1)return dp[i][ssf];

    bool pick = f(i+1,nums,ssf+nums[i],m,dp);
    bool unpick = f(i+1,nums,ssf,m,dp);

    return dp[i][ssf] = pick || unpick;
}

int DivisibleByM(vector<int>nums, int m){
    int sum = 0;
    for(int x:nums){
        sum+=x;
    }
    vector<vector<int>>dp(nums.size(),vector<int>(sum,-1));
    return f(0,nums,0,m,dp);
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

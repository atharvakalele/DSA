#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++)sum+=arr[i];

        if(sum % 2 !=0)return 0;
        vector<vector<int>>dp(N,vector<int>(sum/2 + 1,-1));
        return f(N-1,arr,sum/2,dp);
    }
private :
    bool f(int n,int* arr, int sum, vector<vector<int>>& dp){
        if(sum == 0)return 1;
        if(n == 0){
            return arr[0] == sum;
        }
        if(dp[n][sum]!=-1)return dp[n][sum];
        bool pick = 0;
        if(sum>=arr[n])pick = f(n-1,arr,sum-arr[n],dp);
        bool unpick = f(n-1,arr,sum,dp);
        
        return dp[n][sum] = pick || unpick;
    }
};
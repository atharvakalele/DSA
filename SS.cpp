#include <iostream>
#include <vector>

using namespace std;
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        vector<vector<int>>dp(arr.size(),vector<int>(sum+1,0));
        // f(arr.size()-1,arr,sum,dp);
        for(int i=0;i<arr.size();i++){
            dp[i][0] = 1;
        }
        dp[0][arr[0]] = 1;
        for(int i=1;i<arr.size();i++){
            for(int j=1;j<=sum;j++){
                bool pick = 0;
                if(sum>=arr[i])pick = dp[i-1][j-arr[i]];
                bool unpick = dp[i-1][j];
                dp[i][j] = pick || unpick;
            }
        }
        return dp[arr.size()-1][sum];
    }
private :
    bool f(int n,vector<int>& arr, int sum, vector<vector<int>>& dp){
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
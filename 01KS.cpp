#include <iostream>
#include <vector>

using namespace std;


int knapSack(int W, int wt[], int val[], int n) 
    { 
        //base case 2
        vector<vector<int>> dp(n,vector<int>(W+1,0));
        /*return f(W,wt,val,n-1,dp);*/
        
        //Bottom-Up Approach!
        
        //Base case1
        for(int w = wt[0];w<=W;w++){
            dp[0][w] = val[0];
        }
        //oth row has already been initialized.
        for(int i=1;i<n;i++){
            for(int j = 0;j<=W;j++){
                int take = INT_MIN;
                if(wt[i]<=j)take = val[i] + dp[i-1][j-wt[i]];
        
                int nottake = 0 + dp[i-1][j];
                dp[i][j] = max(take,nottake);
            }
        }
        return dp[n-1][W];
        
    }
int f(int W,int wt[],int val[], int n,vector<vector<int>>& dp)
    {
        if(n == 0){
            if(wt[0]<=W)return val[0];
            else return 0;
        }
        if(dp[n][W]!=-1)return dp[n][W];
        
        int take = (int)INT_MIN;
        if(wt[n]<=W)take = val[n] + f(W-wt[n],wt,val,n-1,dp);
        
        int nottake = 0 + f(W-0,wt,val,n-1,dp);
        
        return dp[n][W] = max(take,nottake);
    }
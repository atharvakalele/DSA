 #include <iostream>
 #include <vector>
 using namespace std;

 long long int count(int S[], int m, int n) {
        
        vector<vector<long long int>>dp(m,vector<long long int>(n+1,0));
        /*return f(m-1,S,n,dp);*/
        
        for(int i=0;i<m;i++){
            dp[i][0] = 1;
        }

        for(int t=1;t<=n;t++){
            if(t%S[0]==0)dp[0][t]=1;
        }
        
        for(int i = 1;i<m;i++){
            for(int t = 1;t<=n;t++){
                long long int unpick = dp[i-1][t];
                long long int pick = 0;
                if(S[i]<=t){
                    pick = dp[i][t-S[i]];
                }
                dp[i][t] = unpick + pick;
            }
        }
        
        return dp[m-1][n];
        
    }
    long long int f(int idx,int S[], int n,vector<vector<long long int>>& dp)
    {
        if(idx == 0){
            if(n%S[0]==0)return 1;
            return 0;
        }
        if(dp[idx][n]!=-1)return dp[idx][n];
        if(n == 0)return 1;
        long long int unpick = f(idx-1,S,n,dp);
        long long int pick = 0;
        if(S[idx]<=n)pick = f(idx,S,n-S[idx],dp);
        return dp[idx][n]=pick + unpick;
    }
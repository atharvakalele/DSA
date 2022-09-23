#include <iostream>
#include <vector>

using namespace std;


class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<int>v(b,-1);
        vector<vector<int>>dp(a,v);
        return f(a-1,b-1,dp);
    }
    private :
    int f(int i, int j, vector<vector<int>>&dp)
    {
        if(i==0 && j==0)return 1;
        if(i<0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        int up = f(i-1,j,dp);
        int left = f(i,j-1,dp);

        return dp[i][j] = (up+left);
    }
    
    int g(int a, int b){
        vector<int>v(b,0);
        vector<vector<int>>dp(a,v);

        

        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){

                if(i==0 && j==0)dp[i][j] = 1;
               else{
                 int up = 0;
                int left = 0;
                if(i>0)up = dp[i-1][j];
                if(j>0)left = dp[i][j-1];

                dp[i][j] = up + left;
               }
            }
        }
        return dp[a-1][b-1];
    }
};

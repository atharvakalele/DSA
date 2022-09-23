#include <iostream>
# include <vector>

using namespace std;

class Solution{
    public :
        int maximizeMoney(int N,int K){
            
            vector<int>houses(N);

            for(int i=0;i<N;i++)
            {
                houses[i] = K;
            }

            vector<int>dp(N,-1);

            return f(houses,houses.size(),dp);
        }
    private:
        int f(vector<int>houses,int n,vector<int>&dp){
            
            if(n==0)return houses[0];
            if(n<0)return 0;
            if(dp[n]!=-1)return dp[n];

            int pick = houses[n] + f(houses,n-2,dp);

            int unpick = 0 + f(houses,n-1,dp);

            return dp[n]=max(pick,unpick);
        }

        int g(vector<int>houses)
        {
            vector<int>dp(houses.size(),0);
            dp[0] = houses[0];
            for(int i=1;i<houses.size();i++){
                int pick = houses[i];
                if(i>1)pick+=dp[i-2];
                int unpick = 0 + dp[i-1];

                dp[i]= max(pick,unpick);
            }
            return dp[houses.size()-1];
        }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}

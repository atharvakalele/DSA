#include <iostream>
#include <vector>>

using namespace std;

class Solution
{
    public :
        int findMaxSum(int* arr, int n)
        {
            vector<int>dp(n,-1);
            return f(arr,n-1,dp);
        }
    private :
        int f(int* arr, int idx,vector<int>&dp)
        {
            if(idx==0)return arr[0];
            if(idx<1)return 0;

            if(dp[idx]!=-1)return dp[idx];

            int pick = arr[idx] + f(arr,idx-2,dp);

            int unpick = f(arr,idx-1,dp);

            return dp[idx]=max(pick,unpick);
        }
        
        int g(int* arr, int idx)
        {
            vector<int>dp(idx+1,0);

            for(int i=1;i<=idx;i++)
            {
                int take = arr[i];
                if(i>1)take+=dp[i-2];

                int untake = dp[i-1];

                dp[i]= max(take,untake);
            }
            return dp[idx];
        }
};

int main(int argc, char const *argv[])
        {
            int N = 6;
            int arr[] = {5, 5, 10, 100, 10, 5};
            Solution obj;
            cout<<obj.findMaxSum(arr,N);
            return 0;
        }
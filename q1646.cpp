#include <iostream>
#include <vector>

using namespace std;

//Get Max in a Generated Array.

class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>dp(n+1);
        //int dp[n+1]; vector is faster than arrays like 62% faster.
        int maximum = 0;
        for(int i=0;i<=n;i++){
            if(i==0)dp[i] = 0;
            else if(i==1)dp[i] = 1;
            else if(i%2==0){
                dp[i] = dp[i/2];
            }
            else{
                dp[i] = dp[i/2] + dp[i-i/2];
            }
            maximum = max(maximum,dp[i]);
        }
        return maximum;
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}

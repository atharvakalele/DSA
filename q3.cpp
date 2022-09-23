#include <iostream>
using namespace std;


class Solution {
public:
    static string longestPalindrome(string s) {
        int l = 0,r = 0;
        string max_substr = "";
        int len = 0;
        for(int i=1;i<s.length();i++){
            l = i-1,r=i+1,len = 1;
            while(l>=0 && r<s.length()){
                if(s[l] == s[r]){
                    len+=2;
                }
                else break;
                l--,r++;
            }
            if(len>max_substr.length()){
                max_substr = s.substr(l+1,len);
            }

            l = i-1,r=i,len = 0;
            while(l>=0 && r<s.length()){
                if(s[l] == s[r]){
                    len+=2;
                }
                else break;
                l--,r++;
            }
            if(len>max_substr.length()){
                max_substr = s.substr(l+1,len);
            }
        }
        return max_substr;
    }
};

int main(int argc, char const *argv[])
{
    cout<<Solution::longestPalindrome("babad");
    return 0;
}

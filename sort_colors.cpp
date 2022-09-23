#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
     void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = low;
        int high = nums.size()-1;
        
        while(mid<=high){
            if(nums[mid]==0)swap(nums[low++],nums[mid++]);
            else if(nums[mid]==1)mid++;
            else swap(nums[mid],nums[high--]);
        }
    }
private :
    void SWAP(int& x, int& y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int partition(vector<int>& nums, int low, int high)
    {
        int pivot = low;
        int i = pivot+1;
        int j = high;
        while(i<j)
        {
            while(nums[pivot]>nums[i])i++;
            while(nums[pivot]<nums[j])j--;
            if(i<j)SWAP(nums[i],nums[j]);
        }
        if(i>=j)SWAP(nums[pivot],nums[j]);
        return j;
    }
    void quick_sort(vector<int>&nums,int low,int high)
    {
        if(low<high){
            int pivot = partition(nums,low,high);

            quick_sort(nums,low,pivot-1);
            quick_sort(nums,pivot+1,high);
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;
    vector<int>nums = {0,0,1,0,1,1};
    obj.sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

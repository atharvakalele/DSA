#include <iostream>

using namespace std;

int bs(int* arr, int low, int high,int search){
    while(high - low > 1){
        int mid = (low+high)/2;
        if(arr[mid]>search)high = mid-1;
        else low = mid;
    }
    if(arr[low]==search)return low;
    else if(arr[high] == search)return high;
    else return -1;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

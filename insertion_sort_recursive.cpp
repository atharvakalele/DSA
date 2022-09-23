#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void f(vector<int>& arr,int n)
{
    if(n==1)return;
    
    f(arr,n-1);

    int temp = arr[n-1];

    int s = n-2;
    while(temp<arr[s] && s>=0){
        arr[s+1] = arr[s];
        s--;    
    }
    arr[s+1] = temp;
    
}

int main()
{
    vector<int>arr = {3,1,5,2,6,100,2,3,20,10000};
    f(arr,arr.size());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
#include <iostream>

using namespace std;

void SWAP(int* arr, int i ,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int sorting(int* arr, int low,int high)
{
    int pivot = low;
    int i = low+1;
    int j = high;
    while(i<j)
    {
        while(arr[pivot]>arr[i])i++;
        while(arr[pivot]<arr[j])j--;
        if(i<j)SWAP(arr,i,j);
    }
    if(i>=j)SWAP(arr,pivot,j);
    return j;
}

void partition(int* arr,int low, int high)
{
    if(low<high)
    {
        int pivot = sorting(arr,low,high);

        partition(arr,low,pivot-1);

        partition(arr,pivot+1,high);
    }
}


int main(int argc, char const *argv[])
{
    int arr[] = {4,6,2,5,7,9,1};
    
    partition(arr,0,sizeof(arr)/sizeof(arr[0])-1);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }    
    return 0;
}

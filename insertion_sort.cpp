#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N = 10;
    int* arr = new int[N];

    for(int i=1;i<N;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
    return 0;
}

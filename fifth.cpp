#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A[] = {1,2,3,4,6};

    /*for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        cout<<*(A+i)<<" "<<(A+i)<<endl;
        cout<<A[i]<<" "<<&*(A+i)<<endl;
    }*/

    int* ptr;
    int x = 0;
    int N = sizeof(A)/sizeof(A[0]);
    ptr = A;
    while(x<N)
    {
        cout<<*ptr<<" "<<ptr<<endl;
        ptr++;
        x+=1;
    }

    return 0;
}

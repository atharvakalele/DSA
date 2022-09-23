#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int* p;
    p = &a;//p points to the address of a in memory.
    cout<<p<<" "<<*p<<endl;
    //*(p+1) = 12; wrong way to assign.
    cout<<p+1<<" "<<*(p+1)<<endl;
    

    return 0;
}

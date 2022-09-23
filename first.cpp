#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int* p = &a;

    cout<<a<<" "<<&a<<endl;;
    cout<<*p<<" "<<p<<" "<<&p<<endl;

    *p = 11; //whenever the variable p is referred it straightaway goes back to the address it has in this case case &a.

    cout<<*p<<" "<<a<<endl;
    return 0;
}

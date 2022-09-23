#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int* p;
    p = &a;//pointer set
    *p = 10;//address of a has been written

    cout<<p<<" "<<*p<<endl;

    char* q;
    q = (char*)p; //the address p had has been assigned to q but it is of 'char' type

    cout<<q<<" "<<*q<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int f(int a){
    a = a+1;
}
int g(int* ptr){
    *ptr = *ptr + 1;
}
int h(int& a){
    a = a+1;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    cout<<a<<endl;
    f(a);
    cout<<a<<endl;
    g(&a);
    cout<<a<<endl;
    h(a);
    cout<<a<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 'a' - 'b';//implicitly converts from char to int.
    cout<<x<<endl;
    cout<<(char)x<<endl;//explicit typecasting.
    return 0;
}

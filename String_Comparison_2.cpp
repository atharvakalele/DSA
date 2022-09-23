#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1 = "hello";
    string str2 = "jacob";

    cout<<str1.compare(str2)<<endl;//str1<str2 : <0.
    cout<<str2.compare(str1)<<endl;//str2>str1 : >0.

    cout<<str1.compare(str1.length()-1,1,str2,str2.length()-2,1)<<endl; //compares '0' of str1 with 'o' of str2.

    cout<<str1.compare(str1.length()-1,1,str2,str2.length()-2,2)<<endl; //'o' < "ob" : < 0.

    return 0;
}

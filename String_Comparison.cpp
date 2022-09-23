#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "abs";
    string s2 = "xy";
    string s3 = "abs";

   /*cout<<(s1==s2)<<endl;

    cout<<(s1>s2)<<endl;
    
    cout<<(s1<s2)<<endl;*/

     int x = s1.compare(s2);
     int y = s2.compare(s1);
     int z = s1.compare(s3);
 
    /*if (x != 0) {
        cout << s1
             << " is not equal to "
             << s2 << endl;
        if (x > 0)
            cout << s1
                 << " is greater than "
                 << s2 << endl;
        else
            cout << s2
                 << " is greater than "
                 << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;*/

        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;

    
    return 0;
}

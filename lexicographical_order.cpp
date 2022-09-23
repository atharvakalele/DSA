#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

bool cmp(string str1, string str2){
    if(str1.compare(0,str2.size(),str2)==0 || str2.compare(0,str1.size(),str1)==0)return str1.length()>str2.length();
    else return str1<str2;
}

int main(int argc, char const *argv[])
{
    string arr[] = {"batman","bat","apple"};

    sort(arr,arr + sizeof(arr)/sizeof(arr[0]),cmp);

    string* ptr;
    ptr = arr;
    int x = 0;
    while(x<sizeof(arr)/sizeof(arr[0])){
        cout<<*ptr<<endl;
        ptr++;
        x++;
    }

    
    
    return 0;
}

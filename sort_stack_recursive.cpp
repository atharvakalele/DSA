#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void f(stack<int>&st)
{
    if(st.empty())return;
    int temp = st.top();
    st.pop();
    f(st); //sort till size-1
    stack<int>r;
    while(!st.empty() && temp<st.top()){
        int t = st.top();
        st.pop();
        r.push(t);
    }
    st.push(temp);
    while(!r.empty()){
        st.push(r.top());
        r.pop();
    }
}

int main()
{
    stack<int>st;
    st.push(3);
    st.push(2);
    st.push(9);
    st.push(1);
    st.push(6);
  
    f(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
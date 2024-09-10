#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "String hello";
    int len = s.size();
    s[len-1]='z';
    cout << s[len-1]<< endl;
    cout<<"The given string is "<<s;
    return 0;
}
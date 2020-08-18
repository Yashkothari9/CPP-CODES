#include<bits/stdc++.h>
using namespace std;
int pali_check(string s1,string s2)
{
    int siz=s1.size();
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[siz-1-i])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int is_palindrome(string s)
{
    int x=s.size();
    for(int i=0;i<=x/2;i++){
        if(s[i] != s[x-i-1])
            {
            //flag = 1;
            return 0;
            }
    }
    return 1;
}
int main()
{
    string s1="hi";
    string s2="iii";
    cout<<is_palindrome(s2);
}

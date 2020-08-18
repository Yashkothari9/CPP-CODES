#include<bits/stdc++.h>
using namespace std;
bool Check_Prime(long long int x)
{
    for(int i=2;i*i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    int count=0;
    long long int x=0,prev=0;
    for(int i=0;i<n;i++)
    {
        x=x*10+(s-48);
        if(Check_Prime(x))
        {
            prev=x;
        }
        else
        {
            count++;

        }
    }
}

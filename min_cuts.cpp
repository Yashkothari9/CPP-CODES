#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    return (a<b)?a:b;
}
bool check_palindrome(string a,int i,int j)
{
    while(i<=j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int min_cuts(string s)
{
    int n=s.size();
    int m[n][n];
    bool u[n][n];

    for(int i=0;i<n;i++)
    {
        m[i][i]=0;
        u[i][i]=true;
    }
    for(int len=2;len<=n;len++)
    {
        for(int i=0;i<n-len+1;i++)
        {
           int j=i+len-1;

            if(len==2)
                u[i][j]=(s[i]==s[j]);
            else
                u[i][j]=(s[i]==s[j])&&(u[i+1][j+1]);



            if (u[i][j] == true)
                m[i][j] = 0;
            else
            {
                 m[i][j] = INT_MAX;
                for (int f = i; f <= j - 1; f++)
                    m[i][j] = min(m[i][j], m[i][f] + m[f + 1][j] + 1);
            }
        }
    }
  return m[0][n - 1];
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
       int x= min_cuts(s);
       cout<<x<<"\n";
    }
    return 0;
}

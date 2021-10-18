#include <bits/stdc++.h>
using namespace std;
void lcs(string s1,string s2)
{
    int si1=s1.size();
    int si2=s2.size();
    int c[si1+1][si2+1];
    for(int i=0;i<=si1;i++)
    {
        c[0][i]=0;
    }
    for(int i=0;i<=si2;i++)
    {
        c[i][0]=0;
    }
    for(int i=1;i<si1+1;i++)
    {
        for(int j=1;j<si2+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
            }
            else if(c[i-1][j]>c[i][j-1])
            {
                c[i][j]=c[i-1][j];
            }
            else
            {
                c[i][j]=c[i][j-1];
            }
        }
    }
    for(int i=0;i<si1;i++)
    {
        for(int j=0;j<si2;j++)
        {
            cout<<c[i][j]<<" ";
        }cout<<"\n";
    }
    cout<<c[si1][si2]<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int si1,si2;
        cin>>si1>>si2;
        string s1,s2;
        cin>>s1>>s2;
        lcs(s1,s2);

    }
	//code
	return 0;
}

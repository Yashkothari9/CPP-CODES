#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string *s=new string[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if((s[i][0]=='O'&& s[i][1]=='O'))
        {
            s[i][0]='+';
            s[i][1]='+';
            flag=1;
            break;
        }
        if(s[i][3]=='O'&& s[i][4]=='O')
        {
            s[i][3]='+';
            s[i][4]='+';
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<"\n";
        }
    }
}

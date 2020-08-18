#include<bits/stdc++.h>
using namespace std;
void your(string s)
{
    char ans[s.size()];
    char we;
    for(int i=0;i<s.size();i++)
    {we=s[i];
     if(s[i]>=97 &&s[i]<=122)
     {
     ans[i]='a'+(char)(122-(int)we);
     }
     else
     {
         ans[i]=we;
     }
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<ans[i];
    }
}
int main()
{
    string s;
    scanf("%[^\n]s",s);
    your(s);
}

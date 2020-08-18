#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    //cout<<s;
    int ch[26]={0};
    for(int i=0;i<n;i++)
    {
        ch[s[i]-'a']++;
    }
    while(k--)
    {
        int i;
        for(i=0;i<26;i++)
        {

            if(ch[i]>=1){ ch[i]--;break;}
        }
        char m='a'+i;
        int p;
        for(int j=0;j<n;j++)
        {
            if(s[j]==m){p=j;break;}
        }
        s.erase(s.begin() + p);
        //cout<<s<<"\n";
    }
    cout<<s<<"\n";
}

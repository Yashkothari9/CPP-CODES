#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int c;
     int a[26];
     for(int i=0;i<26;i++)
     {
         a[i]=0;
     }
     for(int j=0;j<s.size();j++)
     {
         a[s[j]-97]++;
     }
    //  for(char w='a';w<='z';w++)
    //  {
    //      cout<<w<<" ";
    //  }
    //  cout<<"\n";
    // for(int i=0;i<26;i++)
    //  {
    //      cout<<a[i]<<" ";
    //  }
     for(int i=0;i<q;i++)
     {
         cin>>c;
         int ans=0;
         for(int j=0;j<26;j++)
         {
             if(a[j]>0){
             if(a[j]>c)
             {
              int x=(a[j]-c);
              ans=ans+x;
             }
             }
         }
         cout<<ans<<"\n";
     }
    }
return 0;
}

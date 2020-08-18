#include<bits/stdc++.h>
using namespace std;
int check_rot(string s,string t,vector<int> pos)
{
    int count=0,flag=1;
    for(int j=0;j<pos.size();j++)
    {
        count++;
        int tmp=t[pos[0]];
        //cout<<"tmp:"<<tmp<<" ";
        for(int i=0;i<pos.size()-1;i++)
        {
            t[pos[i]]=t[pos[i+1]];
        }
       // cout<<"t[pos[pos.size()-1]]:"<<t[pos[pos.size()-1]]<<"\n";
        t[pos[pos.size()-1]]=tmp;
       // cout<<s<<" "<<t<<"\n";
        if(s==t)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int> pos;
    int ans;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            pos.push_back(i);
        }
    }
    if(pos.size()==1)
    {
        ans=-1;
    }
    else if(s==t)
    {
        ans=0;
    }
    else
    {
        int cnt=0;
        cnt=check_rot(s,t,pos);
        ans=cnt;
    }

    cout<<ans<<"\n";
    return 0;
}

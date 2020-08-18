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
    int n,m;
    cin>>n>>m;
    vector<string> ch;
    string w;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        ch.push_back(w);
    }
    stack<string> s1;
    stack<string> s2;
    stack<string> s3;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(pali_check(ch[i],ch[j])==1&&ch[i]!="A")
            {
                s1.push(ch[i]);
                s2.push(ch[j]);
                flag=1;
                ch[i]="A";
                ch[j]="A";
                break;

            }
        }
        if(flag==0 &&ch[i]!="A")
        {
            if(is_palindrome(ch[i])==1)
            {
                s3.push(ch[i]);
            }
        }
        else
        {
            continue;
        }
    }
    string q;
    stack<string> s4;
    while(!s2.empty())
    {
        q=s2.top();
        s2.pop();
        s4.push(q);
    }

    string res="";
   // stack<string> s4;

    //cout<<s1.empty()<<endl;
    while(!s1.empty())
    {
        res+=s1.top();
        s1.pop();
    }
    //cout<<s3.empty()<<endl;
    if(!s3.empty())
    {
        res+=s3.top();
    }
   // cout<<s2.empty()<<endl;
    //string rt="";
    while(!s4.empty())
    {
        res+=s4.top();
        s4.pop();
    }
    if(res.size()==0)
    {
        cout<<"0\n";
    }
    else{
        cout<<res.size()<<"\n";
        cout<<res<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int cntp=0,cntm=0,cntq=0,cnp=0,cnm=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=="+")
        {
            cnp++;
        }
        else{
            cnm++;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(s2[j]=="+")
        {
            cntp++;
        }
        else if(s2[j]=="-")
        {
            cntm++;
        }
        else if(s2[i]=="?")
        {
            cntq++;
        }
    }
    double p=0,ori,can;
    if(s1.size()==s2.size())
    {
        ori=cnp/cnm;
        can=cntp/cntml
        if(cntq==0)
        {
        if(cnp==cntp && cnm=cntm)
        {
            p=0.5000000;
        }
        else{
            p=0.0000000;
        }
        }
        else{
            if(ori==can)
            {
                p=0.50000000;
            }
            else
            {
                p=0.0000000;
            }
        }
    }
    else
    {
        p=0.00000000;
    }
    cout<<p<<"\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int Case=0;Case<t;Case++)
    {
        string s;
        cin>>s;
        int max=INT_MIN;
        int idx;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-48)>max)
            {
                max=s[i]-48;
                idx=i;
            }
        }
        vector<char> s1;
        int total_open=0,current=0;
         total_open=s[0]-48;
         for(int i=0;i<total_open;i++)
         {
             s1.push_back('(');
         }
         char w=s[0];
         s1.push_back(w);
         int closed=0;
        for(int i=1;i<s.size();i++)
        {
           current=(s[i]-48);
           if(total_open>current)
           {
                closed=total_open-current;
                total_open=total_open-closed;
                for(int j=0;j<closed;j++)
                {
                   s1.push_back(')');
                }
                w=s[i];
                s1.push_back(w);
           }
           else if(total_open<current)
           {
               int temp=current-total_open;

                for(int i=0;i<temp;i++)
                {
                    s1.push_back('(');
                }
                w=s[i];
                s1.push_back(w);
                total_open+=temp;;
           }
           else if(total_open==current)
           {
               s1.push_back(s[i]);
           }
        }
        if(total_open>0)
        {
            while(total_open--)
            {
                s1.push_back(')');
            }
        }
        cout<<"Case #"<<Case+1<<": ";
        for(int i=0;i<s1.size();i++)
        {
            cout<<s1[i];
        }cout<<"\n";
    }
    return 0;
}

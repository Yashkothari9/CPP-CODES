#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        string g,s;
        cin>>s;
        stack <char> ch;
        int flag=0;
        n=s.length();
        if(s[n-1]=='"')
        {

            {s=s.substr(0,n-1);}
        }
        if(s[0]=='"')
            {
                s=s.substr(1,n-1);
            }

   //cout<<s;
    for(i=0;i<s.length();i++)
        {
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
            {
                ch.push(s[i]);
            }
            else if(ch.empty()){flag=1;break;}
            else if((s[i]==')')&& (ch.size()>0) )
            {
                    if(ch.top()=='('){
                //cout<<ch.top()<<"\n";
                 ch.pop();}
            }

            else if((s[i]=='}')&& (ch.size()>0) )
            {
                    if(ch.top()=='{'){
                //cout<<ch.top()<<"\n";
                 ch.pop();}
            }
           if((s[i]==']')&& (ch.size()>0) )
            {
                    if(ch.top()=='['){
                //cout<<ch.top()<<"\n";
                 ch.pop();}
            }
           /* else{

                ch.push(s[i]);

            }*/
           /* if(ch.empty())
                {
               // cout<<"invalid\n";
                 flag=1;
                 break;
                }*/

            //cout<<ch.top()<<"\t";
        }
        if(ch.empty()&&(flag==0) )
        {
            cout<<"valid\n";
        }
        else
        {
            cout<<"invalid\n";
        }

    }
    return 0;
}

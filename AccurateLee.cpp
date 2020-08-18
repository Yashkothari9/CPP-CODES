#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        while(1)
        {int flag=0;
            if(s.size()>1){
            for(int i=0;i<n-1;i++)
            {
                if(s[i]=='1' && s[i+1]=='0')
                {
                    flag=1;
                    s.erase(s.begin()+i);
                    break;
                }
            }
            }
            else
            {
                break;
            }
            if(flag==0)
            {
                break;
            }
        }
        if(n==s.size()){
        cout<<s<<"\n";}
        else
        {
            int endp=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0'&&s[i+1]=='1')
                {
                    endp=i;
                }
            }
            s.erase(0,endp-1);
            cout<<s<<"\n";
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0;
        int flag=0;
        while(i<s.size() - 1)
        {
            //cout << s << ", i : " << i << "\n";
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                if(i!=0)
                {
                    i=i-2;
                }
            }
             if(s.empty())
            {
                flag=1;
                cout<<"empty string\n";
                break;
            }

                i++;


        }
        if(!s.empty())
        {
            cout<<s<<"\n";
        }
    }
return 0;
}

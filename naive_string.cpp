#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;

        getline(cin,s1);
        int x=s1.size();

        getline(cin,s2);
      //  cout<<s1<<" "<<s2<<"\n";
        int y=s2.size();
        for(int i=0;i<x;i++)
        { int flag=1;
            for(int j=0;j<y;j++)
            {
                if(s1[i+j]==s2[j])
                {
                    continue;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

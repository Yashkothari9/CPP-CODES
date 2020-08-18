#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int loc1=-1;
        int loc2=-1;
        int counti=0;
        int i=0;
        while(i<s1.size())
        {
            if(s1[i]!=s2[i])
            {loc1=i;
                if(s1[i+1]!=s1[i] && s1[i+1]!=s2[i+1])
                {
                  int temp=s1[i];
                  s1[i]=s1[i+1];
                  s1[i+1]=temp;
                  counti++;
                  i=i+2;
                }
                else
                {
                    counti++;
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        cout<<counti<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int flag=0;
    for(int i=0;i<s1.size();i++)
    {
        char c1=s1[i];
        char c2=s2[i];
        if(isupper(c1))
        {
            c1=tolower(c1);
        }

        if(isupper(c2))
        {
            c2=tolower(c2);
        }
        if(c1>c2)
        {
            flag=1;
            break;
        }
        if(c1<c2)
        {
            flag=-1;
            break;
        }

    }
    cout<<flag<<"\n";
    return 0;
}

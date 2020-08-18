#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int l,k;
        cin>>l>>k;
        string s;
        cin>>s;
        char *ch=new char[l];
        for(int i=0;i<l;i++)
        {
            ch[i]=s[i];
        }
        int flag=0;
        for(int i=0;i<l;i++)
        {
            if(ch[i]==0)
            {int j=i;
                while(ch[j]!=1 &&j<l)
                {
                    j++;
                }
                if(k>j-i)
                {
                    char temp = ch[i];
                    ch[i] = ch[j];
                    ch[j] = temp;
                    k=k-(j-i);
                }
                else
                {
                    flag=1;
                    break;
                }

            }
            if(flag==1){break;}
        }
        for(int i=0;i<l;i++)
        {
            cout<<ch[i];
        }cout<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int n=a.size();
        int j=0,q=0,k=0;
        int* c=(int*) calloc(n,sizeof(int));
        for(int i=0;i<n;i++)
        {
            string tmp;
            q=0;
            for(;j<b.size();j++)
            {
                if(a[i]==b[j])
                {   q=1;
                    k=j;
                    break;
                }
                else
                {
                    tmp+='+';
                    tmp+=b[j];
                    tmp+=' ';
                }
            }
            if(q==1 && tmp[0]!='\0')
                cout<<tmp;
            if(q==1)
                cout<<a[i]<<" ";
            else
                cout<<"-"<<a[i]<<" ";

            j=k+1;

        }
        for(int i=k+1;i<b.size();i++)
        {
            cout<<"+"<<b[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

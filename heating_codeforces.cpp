#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int c,sum;
        cin>>c>>sum;
        int s=0;
        int su=0;
        int *a=new int[c];
        float g=(float)sum/c;
       // cout<<"g->"<<g<<"\n";
        if(g<1)
            {
            cout<<sum<<"\n";
            }
        else if((int)g==g)
        {
            for(int i=0;i<c;i++)
            {
                if(s<=sum)
                {
                a[i]=(int)g;
                s=s+(int)g;
                }
            }
            /*for(int i=0;i<c;i++)
            {
                cout<<"a["<<i<<"]->"<<a[i]<<" ";
            }cout<<"\n";*/
             for(int i=0;i<c;i++)
            {
            su+=pow(a[i],2);
            }
                cout<<su<<"\n";
        }
        else
            {
            for(int i=0;i<c;i++)
            {
                if((s+(int)g+1)<sum)
                {
                    a[i]=(int)g+1;
                    s=s+(int)g+1;
                }
                else
                {
                    a[i]=(int)g;
                    s=s+(int)g;
                }
            }
        for(int i=0;i<c;i++)
        {
            su+=pow(a[i],2);
        }
        cout<<su<<"\n";
        }

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i;
    for(i=0;i<t;i++)
    {
        int m,n;
        cin>>m;
        int a[m];
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
        }
        cin>>n;
        int b[n];
        for(int j=0;j<n;j++)
        {
            cin>>b[j];

        }
        int h=0;
        int g=0;
        while(h<m)
        {
            if(a[h]>=b[g])
            {
                int temp;
                temp=a[m-1];

                for(int q=m-1;q>h;q--)
                {
                    a[q]=a[q-1];

                }

                a[h]=b[g];
                for(int q=g;q<n-1;q++)
                {
                    b[q]=b[q+1];

                }

                int l=n-1;
                for(int q=g+1;q<n-1;q++)
                {
                    if(temp<b[0])
                    {
                        l=0;
                    }
                    if(temp<=b[q] && temp>b[q-1])
                    {
                      l=q;
                      break;
                    }

                }
                if(l==n-1)
                {
                    b[n-1]=temp;
                } else
                {
                    for(int q=n-1;q>l;q--)
                    {
                        b[q]=b[q-1];
                    }
                    b[l]=temp;
                }

            }
            h++;

        }
        for(int q=0;q<m;q++)
        {
            cout<<a[q]<<" ";
        }
        cout<<"\n";
        for(int q=0;q<n;q++)
        {
            cout<<b[q]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

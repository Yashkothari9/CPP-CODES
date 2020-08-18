#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int flag=0;
        int *p=new int[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
        int counti=1;
        for(int i=1;i<5;i++)
        {//int x=p[i];
          //  cout<<i<<"-"<<"\n";
         int countm=0;
            for(int j=0;j<=i-1;j++)
            {
                if(p[i]<p[j])
                {
                    countm++;
                }
                else
                {
                    countm=0;
                    break;
                }
            }
            //cout<<"countm for"<<i<<"-"<<countm<<"\n";
            if(countm>=i)
            {
              //  cout<<i<<"\n";
                counti++;
            }
        }
        for(int i=5;i<n;i++)
        {
            //int y=p[i];
            //cout<<i<<"-"<<"\n";
            int counto=0;
            for(int j=i-5;j<=i-1;j++)
            {
                if(p[i]<p[j])
                {
                    counto++;
                }
                else
                {
                    counto=0;
                    break;
                }
            } //cout<<"counto for"<<i<<"-"<<counto<<"\n";
            if(counto>=4)
            {
                //cout<<i<<"\n";
                counti++;
            }
            else
            {
                continue;
            }
        }

        cout<<counti<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int mod(int a,int b)
{
    if(a>b)
    {
        return a-b;
    }
    return b-a;
}
int main()
{
    int te;
    cin>>te;
    while(te--)
    {
        int h,c,t;
        cin>>h>>c>>t;
        int count=0;
        int min=INT_MIN;
        int avg,prev_avg;
        if(h==t)
        {
            count=1;
        }
        else if((h+c)/2==t)
        {
            count=2;
        }
        else
        {int start=h;
          count++;
          avg=start;
          //prev_avg=t-start;
          min=mod(avg,t);
          for(int i=2;;i++)
          {
              if(i%2==1)
              {
                  avg+=h;
              }
              else
              {
                  avg-=c;
              }
              avg=avg/2;
              int curr=mod(avg,t);
              if(curr>=min)
              {
                  break;
              }
              else
              {
                  min=curr;
                  cout<<"at "<<i<<"instance avg= "<<avg<<"min "<<min<<"\n";
                  count++;
              }
          }
        }
        cout<<"min"<<min<<"\n";
        cout<<count<<"\n";

    }
}

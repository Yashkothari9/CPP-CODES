#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,k;
    cin>>n>>k;
    long int *a=new long int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //long int *b=new long int[k];
    int y=k%(n*3);

        if(n%2!=0)
        {
            if(k>n/2)
            {
                a[(n/2)]=0;
            for(int i=0;i<y;i++)
                {
                long int A,B;
                A=a[i%n];
                B=a[n-(i%n)-1];
        //cout<<i%n<<" ";
                a[i%n]=A^B;
        //cout<<a[i];
       // cout<<"\n";

                }
            }
            else
            {
                for(int i=0;i<y;i++)
                {
                long int A,B;
                A=a[i%n];
                B=a[n-(i%n)-1];
        //cout<<i%n<<" ";
                a[i%n]=A^B;
        //cout<<a[i];
       // cout<<"\n";

                }
        }
        }
        else{
        for(int i=0;i<y;i++)
    {
        long int A,B;
        A=a[i%n];
        B=a[n-(i%n)-1];
        //cout<<i%n<<" ";
        a[i%n]=A^B;
        //cout<<a[i];
       // cout<<"\n";
    }
    }


//    cout<<"for k="<<k<<"and i ="<<;
    for(int l=0;l<n;l++)
    {
        cout<<a[l]<<" ";
    }cout<<"\n";

  }
  return 0;
}

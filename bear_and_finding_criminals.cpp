#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    a=a-1;
    int *ar=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int left=0,right=0;
    int i=0;
    int counti=0;
    while(left==0 || right==0)
    {
        if(a-i<0)
        {
            left=1;
        }
        if(a+i>n)
        {
            right=1;
        }
        if(i==0)
        {
            if(ar[a]==1)
            {
                cout<<"ar["<<a<<"] ->"<<ar[a]<<"\n";
                counti++;
            }
        }
        if(left==0 && right==0 &&i!=0)
        {
            if( ar[i+a]==1 && ar[a-i]==1)
            {
                cout<<"ar["<<i+a<<"] -> "<<ar[i+a]<<"  ar["<<a-i<<"] ->"<<ar[a-i]<<"\n";
                counti+=2;
            }
        }
        if(left==0 && right==1 &&i!=0)
        {
            if(ar[a-i]==1)
            {
                cout<<"ar["<<a-i<<"] ->"<<ar[a-i]<<"\n";
                counti++;
            }
        }
        if(left==1&&right==0 &&i!=0)
        {
            if(ar[a+i]==1)
            {
                cout<<"ar["<<a+i<<"] ->"<<ar[a+i]<<"\n";
                counti++;
            }
        }
            cout<<left<<" " <<right<<"\n";
        i++;
    }
    cout<<counti<<"\n";
    return 0;
}

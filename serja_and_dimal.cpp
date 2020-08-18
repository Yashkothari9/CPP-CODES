#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
   // sort(a,a+size);
    int sum1=0,sum2=0;
    int i=0,j=size-1,k=0;
    while(k<size)
    {
        if(k%2==0)
        {
        if(a[i]>a[j])
        {
            sum1+=a[i];
            i++;
        }
        else{
           sum1+=a[j];
            j--;
        }
        }
        else
        {
        if(a[i]>a[j])
        {
            sum2+=a[i];
            i++;
        }
        else{
           sum2+=a[j];
            j--;
        }
        }
        k++;
    }
    cout<<sum1<<" "<<sum2;
    return 0;
}

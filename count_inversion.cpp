#include<bits/stdc++.h>
using namespace std;
static int c;
int merge_sort(int *a,int left,int right,int middle)

{
        int count=0;
        int i,j,k,m1,m2;
        m1=(middle-left)+1;
        m2=(right-middle);
        int l[m1];
        int r[m2];
        for(i=0;i<m1;i++)
        {
          l[i]= *(a+i+left);
        }
        for(j=0;j<m2;j++)
        {
          r[j]= *(a+middle+1+j);
        }
        i=0;
        j=0;
        k=left;
        while(i<m1 && j<m2)
        {
            if(l[i]<=r[j])
             {
             *(a+k)=l[i];
               i++;
             }
           else
             {
              *(a+k)=r[j];
              j++;
              count+=(m1-i);


             }
           k++;
        }
        while(i<m1)
           {
            *(a+k)=l[i];
            i++;
            k++;
           }

        while(j<m2)
           {
            *(a+k)=r[j];
             j++;
             k++;
           }
 return count;
 }
void merge( int *a,int left,int right)
{     if(left>=right) return;
        if(1)
        {
         int middle;
         middle=((right+left)/2);
         merge(a,left,middle);
         merge(a,middle+1,right);
         c=c+merge_sort(a,left,right,middle);
        }

 }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        c=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        merge(a,0,n-1);
        cout<<c<<"\n";

    }
    return 0;
}

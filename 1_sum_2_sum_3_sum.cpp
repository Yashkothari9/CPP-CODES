#include<bits/stdc++.h>
//#include <chrono>
//using namespace std::chrono;
using namespace std;
int main()
{
    int n,i;
     //cin>>n;
     for(int n=1;n<500;n++)
     {
    int a[n];
    clock_t start, end,start1, end1,start2, end2;
    double cpu_time_used,cpu_time_used1,cpu_time_used2;
    for(i=0;i<n;++i)
    {
        a[i]=rand();
    }
    int count1=0,count2=0,count=0;
    //auto start = high_resolution_clock::now();
    start = clock();
    int s;
    for(s=0;s<n;++s)
    {
        if(a[s]==0){count++;}
    }
    end = clock();
     start1 = clock();
    int m,j;
    for(int m=0;m<n-1;++m)
    {
        for(j=m+1;j<n;++j)
        {
            if((a[m]+a[j])==0){count2++;}
        }
    }
    end1 = clock();
    start2 = clock();
    int b,c,k;
    for(int b=0;b<n-2;++b)
    {
        for(int c=b+1;c<n-1;++c)
        {
            for(int k=c+1;k<n;++k)
            {
                if((a[b]+a[c]+a[k])==0){count2++;}

            }

        }

    }
    end2 = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cpu_time_used1 = ((double) (end1 - start1)) / CLOCKS_PER_SEC;
    cpu_time_used2 = ((double) (end2 - start2)) / CLOCKS_PER_SEC;
  // printf("%llf \t %llf \t %llf ",cpu_time_used,cpu_time_used1,cpu_time_used2);
   printf("%d\t%lf\n",n,cpu_time_used);
     }
    return 0;
}

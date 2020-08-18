#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int binary_search(int *a,int ele,int n);
int main(void) {
    double cpu_time_taken,cpu_time_taken1;
    clock_t start,end,start1,end1;
        int i,n,*a,m,x,k;

       for(n=1000;n<=1000000;n=n+1000)
       {
        a=(int*) malloc(n*sizeof(int));

        srand(time(0));
         m=a[rand()%n];
       // printf("%d",m);
        for(i=0;i<n;i++)
        {
            k=rand();
            *(a+i)= k;
        }

        start1=clock();
        int k;
        for(k=0;k<n;k++)
        {
            if(*(a+k)==m){break;}

        }
        end1=clock();
        start=clock();
        x=binary_search(a,m,n);
    end=clock();
    cpu_time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    cpu_time_taken1=(((double)(end1-start1))/CLOCKS_PER_SEC);
        printf("%d\t%lf\t%lf\n",n,cpu_time_taken,cpu_time_taken1);
   // printf("%d %lf %lf\n",n,cpu_time_taken,cpu_time_taken1);
    free(a);
       // /return 0;
}
return 0;
}
int binary_search(int *a,int m,int n )
{
    int l,r;
    int mid;
    l=0;
    r=n-1;
    //mid=l+(r-l)/2;
        while(l<=r)
        {
         mid=l+((r-l)/2);
         if(*(a+mid)==m)
          {
             return mid;
          }
         else if(*(a+mid)>m)
          {
            r=mid-1;
          }
         else
       {
         l=mid+1;
        }
        }return -1;
  }


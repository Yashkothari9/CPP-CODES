#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void insertion_sort(long long int*a,long long int n);
int main()
{
        long long int *a,i,j,k,n;
        //printf("enter the length of the array to be sorted\n");
        for( n=100;n<=100000;n=n+1000)
{
         clock_t start, end;
         double cpu_time_used;
//      srand((time(0));
        a=(long long int*) malloc(n* sizeof(long long int));
        //printf("enter the array\n");
         srand(time(0));

        for(i=0;i<n;i++)
        {
                 k=(rand())%n;
                *(a+i)=k;
                printf("%lld \n",k);
                   //                 scanf("%lld",(a+i));
        }start = clock();
        insertion_sort(a,n);
        end = clock();
        //printf("the sorted array is\n");
        /*for(j=0;j<n;j++)
        {
                printf("%lld\t",*(a+j));
        }*/
        cpu_time_used = ((double) (end - start) / CLOCKS_PER_SEC);
        printf(" time taken for %d is %lf\n",n,cpu_time_used);
        }

        return 0;
}
void insertion_sort(long long int *a, long long int n)
{long long  int key;//sort=0,count=0;
        long long int i,j;
        for(i=0;i<n;i++)
        {       j= i-1;
                key=*(a+i);//count++;
                while(j>=0 && *(a+j)>key)
                 {*(a+j+1)=*(a+j);
                  j=j-1;
                // sort++;
                 }
                 *(a+j+1)=key;
 }
//printf("total number of sorting is %d\t and total no. of comparisons are %d\n",sort,count);

}



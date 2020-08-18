#include<stdio.h>
#include<stdlib.h>
long long int mod(int a)
{
    if(a<0)
    return -a;
    else
    return a;
}
int main()
{
    long int l,t,j,i,n;
    long long int *a,x;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        a=(long long int*) malloc(n * sizeof(long long int));
        for(i=0; i<n; i++)
        {
            *(a+i)=i+1;
        }
    for(j=0;j<n-1;j++)
        {
            *(a+n-1)=*(a+j)+*(a+n-1)+(*(a+n-1) * *(a+j));  
        }
        x=mod(*(a+n-1));
        
           if( x > 1000000007)
            {
            x= (x % (1000000007));
            }
        printf("%lld\n",x);
        free(a);
    }
    return 0;
}
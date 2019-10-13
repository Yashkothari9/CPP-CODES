#include<stdio.h>
int main()
{
	int t,i,n;
	int a[100];
	scanf("%d",&t);
	while(t--)
	{
	    int c[20]={0};
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			c[a[i]]++;
		}
		for(i=0;i<10;i++)
		{
			if(c[i]>=n/2)
			{
			printf("%d\n",i);
			break;
			}
		}
	}
  return 0;
}

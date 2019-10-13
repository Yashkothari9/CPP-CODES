#include <stdio.h>
int add(int x, int y)
{
    while (y != 0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d",add(m,n));
    }
    return 0;
}

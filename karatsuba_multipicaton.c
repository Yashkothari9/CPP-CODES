#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(long long int a)
{
    long long int x,r,i;
    int y;
    x=a;
    while(a!=0)
    {
        y=a%10;
        a=a/10;
        r=r+y*pow(2,i++);
    }
    cout<<r;
}
int x_n_y_0(int x,int n)
{
    int x1;
    int n1=n/2;
    x1=(x%pow(10,(n1)));
    return x0;
}
int x_n_y_1(int x,int n)
{
    int x1;
    int n1=n/2;
    x=(x/pow(10,(n1)));
    return x;
}


long int recursive_multiply( int x, int y,int n1,int n2)
{
int y1,y0,x1,x0;
x0=x_n_y_0(x,n1)
x1=x_n_y_1(x,n1)
cout<<x0<<"\t"<<x1;
/*
y=y1.2^(n/2)+y0

Compute x1+x0 and y1+y0

p=Recursive-multiply(x1+x0, y1+y0)

x1y1=Recursive-multiply(x1,y1)

x0y0=Recursive-multiply(x0,y0)

Return x1y1.2^n + (p-x1y1-x0y0).2^(n/2)+x0y0
*/
}
int count_digits(int n)
{
    count =0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n1,n2;
        cin>>n1>>n2;
        binary_to_decimal(n1);
        binary_to_decimal(n2);
        int n11=count_digits(n1);
        int n22= count_digits(n2);
        int u=recursive_multiply(n1,n2,n11,n22);
        cout<<u<<"\t";
    }
    return 0;
}

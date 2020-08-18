#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
long long int gcd_for_n(vector<long long int> numbers)
{
    long long int result = numbers[0];
    for(long long int i = 1; i < numbers.size(); i++){
    result = gcd(result, numbers[i]);
    }
    return result;
}
long long int lcm(long long int a,long long int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long int> all_lcm;
    for(long long int i=0;i<n-1;i++)
    {
        for(long long int j=i+1;j<n;j++)
        {
            all_lcm.push_back(lcm(a[i],a[j]));
        }
    }
    long long int ans;
    if(all_lcm.size()==1)
    {
        ans=all_lcm[0];
    }
    else
    {
        ans=gcd_for_n(all_lcm);
    }
    cout<<ans;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int isPrime(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
vector<int> factors(int n)
{
    vector<int> fac;
    int i=2;
    while(n!=1)
    {cout<<"hi1.1\n";
        while(n%i==0)
        {
            cout<<"hi1.2\n";
            n=n/i;
            fac.push_back(i);
        }
        i++;
    }
    return fac;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> numbers;
    for(int i=0;i<s.size();i++)
    {
        numbers.push_back(s[i]-48);
    }
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(numbers[i]==1)
        {
            continue;
        }
        else
        {
            if(isPrime(numbers[i]))
            {
                ans.push_back(numbers[i]);
            }
            else
            { cout<<"hi\n";
                vector<int> temp;
                temp=factors(numbers[i]);
                cout<<"hi2\n";
                for(int i=0;i<temp.size();i++)
                {
                    ans.push_back(temp[i]);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }cout<<"\n";
}

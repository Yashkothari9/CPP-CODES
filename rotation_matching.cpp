#include<bits/stdc++.h>
using namespace std;
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[i] = temp;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    int max_match=0,match;
    for(int i=0;i<n;i++)
    {
        match=0;
        leftRotatebyOne(a,n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                match++;
            }
        }
        if(match>max_match)
        {
            max_match=match;
        }
    }
    cout<<max_match;
}

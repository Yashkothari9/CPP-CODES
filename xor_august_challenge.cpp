#include <bits/stdc++.h>
using namespace std;
/*long int find_xor(long int j,int i)
{
    return j^i;
}*/
long long subarrayXor(int arr[], int n, int m)
{

    int* xorArr = new int[n];


    unordered_map<int, int> mp;
    xorArr[0] = arr[0];


    for (int i = 1; i < n; i++)
        xorArr[i] = xorArr[i - 1] ^ arr[i];

    // Calculate the answer
    for (int i = 0; i < n; i++) {

        //int tmp = m ^ xorArr[i];

        //ans = ans + ((long long)mp[tmp]);

        // If this subarray has XOR equal to m itself.
        //if (xorArr[i] == m)
          //ans++;
          if(xorArr[i]==0)
          {

          }

        // Add the XOR of this subarray to the map
        mp[xorArr[i]]++;
    }

    // Return total count of subarrays having XOR of
    // elements as given value m
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,k,l;
        cin>>n;
        long int a[n];
        long int b[n],c[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        /*c[n]={0};
        c[0]=a[0];
        for(int i=1;i<n;i++)
        {
            c[i]=c[i-1]^a[i];
        }
        b[n]={0};
        b[n-1]=a[n-1];
        for(int j=n-2;j>=0;j--)
        {
            b[j]=b[j+1]^a[j];
        }
        for(int k=0;k<(n-1);k++)
        {
        if(c[k]==b[k+1])
        {
            count++;
        }
        */
        for(int i=0;i<n;i++)
        {
            int x=0;
            for(int j=i;j<n;j++)
            {
                x^=a[j];
                if(x==0)
                {
                    count+=(j-i);
                    cout<<i<<"\t"<<j<<"\t"<<count<<"\n";
                }
            }
        }
        cout<<count;
    }
	// your code goes here
	return 0;
}


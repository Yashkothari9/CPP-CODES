#include<bits/stdc++.h>
using namespace std;
void minSwaps(int arr[], int n)
{
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    vector<int> l;
    vector<bool> vis(n, false);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        // already swapped and corrected or
        // already present at correct pos
        if (vis[i] || arrPos[i].second == i)
            continue;

        // find out the number of  node in
        // this cycle and add in ans
        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j]= 1;
            l.push_back(j);
            // move to next node
            j = arrPos[j].second;
            cycle_size++;
        }
        // Update answer by adding current cycle.
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }
     if(ans==1)
    {
        cout<<"yes\n";
        cout<<arr[l[1]]<<" "<<arr[l[0]]<<"\n";

    }
    else
    {
        cout<<"no\n";
    }
    // Return result

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flg=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
           {
            continue;
           }
        else
        {
            flg=1;
            break;
        }
    }
    if(flg==0)
    {
        cout<<"yes\n";
        cout<<a[0]<<" "<<a[0]<<"\n";
    }
    else
    {
        minSwaps(a,n);
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
long long int count1=0;
void swap(long long int* a, long long int* b)
{
   long long int t = *a;
    *a = *b;
    *b = t;
}
long long int partition (long long int arr[], long long int low,long long int high)
{
   long long int pivot = arr[low];
    long long int i = (low +1);
    for (int j = low+1 ; j <= high; j++)
    {
        if (arr[j] < pivot)
        {

            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i -1], &arr[low]);
    return (i-1);
}
void Quick_sort(long long int *a,long long int low,long long int high)
{

        if (low < high){
                long long int index;
                index=partition(a,low,high);
                count1+=(high-low);
                Quick_sort(a,low,index-1);
                Quick_sort(a,index+1,high);

        }
        else return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        //count =0;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Quick_sort(a,0,n-1);
        cout<<count1<<"\n";
        count1=0;
    }
    return 0;
}

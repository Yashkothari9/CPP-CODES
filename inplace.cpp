#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t,i;
  int m,n,j;
  int arr[100],brr[100];
	cin>>t;
	while(t--)
	{
	    int crr[200]={0};
	    cin>>m;
			i=0;
	    while(i<m){
	    cin>>arr[i];
			i++;
		}
	    cin>>n;
	    j=0;
			while(j<n){
	    cin>>brr[j];
			j++;
		}
	    for(i=0;i<m;i++)
	    {
	         crr[i]=arr[i];
	         if(i==m-1)
	         {
	          for(j=0;j<n;j++)
	          crr[++i]=brr[j];
	         }
	    }
	    sort(crr,crr+m+n-1);
			i=0;
	    while(i<m){
	    cout<<crr[i]<<" ";
			i++;
		}
	    cout<<"\n";
	    for(i=m;i<m+n;i++)
	    cout<<crr[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}

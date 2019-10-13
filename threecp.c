#include <iostream>
#include <algorithm>
using namespace std;
 int main() {
	int arr[100];
  int i,t,n;
	cin>>t;
	while(t--)
	{
	    int c[4]={0};
	    cin>>n;
      i=0;
	    while(i<n)
	    {
	        cin>>arr[i];
          i++;
	    }
	    i=0;
      while(i<3)
	    {
	        c[i]=count(arr,arr+n,i);
          i++;
	    }
	    i=0;
      while(i<3)
	    {
	        while(c[i]!=0)
	        {
	            cout<<i<<" ";
	            c[i]--;
	        }
          i++;
	    }
	    cout<<"\n";
	}
	return 0;
}

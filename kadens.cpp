#include <iostream>
using namespace std;

void kadane_algo(int arr[], int n)
{
	int max_till = 0;
	int max_end = 0;
	int start = 0, end = 0;
	int beg = 0;
	for (int i = 0; i < n; i++)
	{
		max_end = max_end + arr[i];
		if (max_end < 0)
		{
			max_end = 0;
			beg = i + 1;
		}
		if (max_till <= max_end)
		{
			max_till = max_end;
			start = beg;
			end = i;
		}
	}

	cout << end-start+1<<" "<<	max_till << endl;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	  cin>>n;
	  int arr[100];
	  for(int i=0;i<n;i++)
	   cin>>arr[i];
	  	kadane_algo(arr, n);
    }

	return 0;
}

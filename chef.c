#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],sum=0;
         double avg,avg1;
         int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        avg=sum/n;
        for(int j=0;j<n;j++)
        {   avg1=((sum-a[j])/(n-1));
            
            if(avg1==avg)
            {
              cout<<j+1;
              flag=1;
              break;
            }
        }
        if(flag==0)
        {
            cout<<"impossible";
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}

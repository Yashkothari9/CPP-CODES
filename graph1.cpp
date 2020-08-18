#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *a=new int[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
        }

        int i=n-2;
        stack<int> st;
        while(i>=1)
        {
            st.push(i+2);
            i=a[i]-2;
            if(i==1)
            {
                st.push(i+2);
                if(a[i]!=1){
                st.push(a[i]);}
                st.push(1);
                break;
            }
            if(i==0)
            {
                st.push(i+2);
                st.push(1);
                break;
            }
        }
        while(!st.empty())
        {
            int x=st.top();
            cout<<x<<" ";
            st.pop();
        }
        cout<<"\n";
    }
    return 0;
}

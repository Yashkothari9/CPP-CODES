#include<bits/stdc++.h>
using namespace std;
int main()
{

     clock_t start1,end1;
     double cpu_time_used;
     int n;
     //cin>>n;
     int c;
     //c = rand()%n;
     //cout<<c;
     //int a=0,b=0;
     cin>>n>>c;
     start1 = clock();
    for(int i=2;i<n;i=pow(i,c))
    {
        //a=a+b;
    }
    end1 = clock();
    cpu_time_used = ((double) (end1 - start1)) / CLOCKS_PER_SEC;
    cout <<cpu_time_used << endl;

return 0;
}


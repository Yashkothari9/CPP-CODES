#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
     clock_t start1,end1;
     double cpu_time_used;
     //int n;
     int c;
    // c = rand()%n;
     //int a=0,b=0;
     cin>>n>>c;
     start1 = clock();
    for(int i=1;i<n;i*=c)
    {
        //a=a+b;
    }
    end1 = clock();
    cpu_time_used = ((double) (end1 - start1)) / CLOCKS_PER_SEC;
    cout <<cpu_time_used << endl;

return 0;
}

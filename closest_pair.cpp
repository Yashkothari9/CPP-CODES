#include<bits/stdc++.h>
using namespace std;
typedef struct coordinate
{
    int x;
    int y;
}coordinate;
float dist(coordinate c1,coordinate c2)
{
    return sqrt( (c1.x - c2.x)*(c1.x - c2.x) +
                 (c1.y - c2.y)*(c1.y - c2.y)
               );
}
void closest_pair(coordinate c1[], int n)
{
    float mina = FLT_MAX;
    coordinate a,b;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (dist(c1[i], c1[j]) < mina)
               {mina = dist(c1[i], c1[j]);
               a=c1[i];
               b=c1[j];
               }
    cout<<"("<<a.x<<","<<a.y<<")"<<" "<<"("<<b.x<<","<<b.y<<")"<<" "<<std::fixed<<setprecision(3)<<mina<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        coordinate c1[n];
        for(int i=0;i<n;i++)
        {
            cin>>c1[i].x>>c1[i].y;
        }
        closest_pair(c1,n);
    }
    return 0;
}

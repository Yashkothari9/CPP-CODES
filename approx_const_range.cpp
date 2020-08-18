#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);

    int *a=new int[n];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);

    int m = 0;
    int maxi = a[0], mini = a[0], l = 1;
    for(int i = 1 ; i < n ; ++i) {
            cout << "i : " << i << ", max : " << maxi << ", min : " << mini << ", length : " << l << "\n";
        if(a[i] == maxi || a[i] == mini) ++l;
        else if(a[i] < mini && (maxi - a[i] == 1)) {
            mini = a[i];
            ++l;
        } else if(a[i] > maxi && (a[i] - mini == 1)) {
            maxi = a[i];
            ++l;
        } else if (a[i] < mini && (maxi - a[i] > 1)) {
            maxi = mini;
            mini = a[i];
            if(l >= m) m = (i == n - 1) ? l + 1 : l;
            l = 1;
        } else if(a[i] > maxi && (a[i] - mini > 1)) {
            mini = maxi;
            maxi = a[i];
            if(l >= m) m = (i == n - 1) ? l + 1 : l;
            l = 1;
        }
    }

    printf("%d\n", m + 1);
    return 0;
}

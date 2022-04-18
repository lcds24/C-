#include <bits/stdc++.h>
using namespace std;

int a[1005];
int f[1005];

int main() {

    memset(a,0,sizeof(a));
    memset(f,0,sizeof(f));

    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];

    int res = 0;
    for(int i=0;i<n;i++)
    {
        f[i] = 1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            f[i] = max(f[i],f[j]+1);
        }
        res = max(res,f[i]);
    }

    cout<<res;

    return 0;
}


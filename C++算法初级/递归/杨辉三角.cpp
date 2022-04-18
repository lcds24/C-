#include <bits/stdc++.h>
using namespace std; 

int f[64][64];

int main() {

    memset(f,0,sizeof(f));

    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        f[i][0]=1;
        f[i][i]=1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            f[i][j] = f[i-1][j]+f[i-1][j-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<f[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}

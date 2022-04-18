#include <bits/stdc++.h>
using namespace std; 

int main() {

    int n,v[11];
    for(int i=1;i<=10;i++)cin>>v[i];

    int dp[101];
    memset(dp,127,sizeof(dp));
    dp[0] = 0;

    cin>>n;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=i)dp[j] = min(dp[j],dp[j-i]+v[i]);
        }
    }

    cout<<dp[n];

    return 0;
}

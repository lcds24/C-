/*
我们有两种砖可供选择，设2 * 1的砖为 A， 2 * 2的砖为B。
当我们在最开始铺上A砖时，有两种选择：
竖着铺 A 砖——此时，后面的砖的铺法就是 dp[i - 1]
横着铺 A 砖——此时，后面的砖的铺法就是 dp[i - 2]
当我们在最开始铺上B砖时，只有一种选择：
即B砖占据前面四个格——则，后面的砖的铺法就是 dp[i - 2]

因此可以得出递推式 dp[i] = dp[i-1]+2*dp[i-2]
*/

#include <bits/stdc++.h>
using namespace std; 

int res(int n)
{
    int dp[32];
    memset(dp,0,sizeof(dp));
    dp[1]=1;dp[2]=3;
    for(int i=3;i<=n;i++)
    {
       dp[i] = dp[i-1]+2*dp[i-2];
    }
    return dp[n];
}

int main() {

    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        int ans = res(num);
        cout<<ans<<endl;

    }
    return 0;
}

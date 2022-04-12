#include <bits/stdc++.h>
using namespace std;

int main() {

    int m;
    int n;
    cin>>m;
    cin>>n;
    
    int flag = 0；//设置flag判断是否存在水仙花数

    for(int i=m;i<=n;i++)
    {
        int a = i/100;
        int b = (i/10)%10;
        int c = i%10;

        if(a*a*a+b*b*b+c*c*c == i)
        {
            flag = 1;
            cout<<i<<" ";
        }

    }

    if(!flag)cout<<"no";

    return 0;
  
}

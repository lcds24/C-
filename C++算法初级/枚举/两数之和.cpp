//只要将输入进来的a[n]进行排序后就变成了两数之和问题

#include <bits/stdc++.h>
#define N 105 
using namespace std; 
 
int a[N], n; 
 
int main() { 

    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);

    int count = 0;

    for(int i=2;i<n;i++)
    {
        int sum = a[i];
        int l=0;
        int r=i-1;
        while(l<r)
        {
            if(a[l]+a[r]<sum)
            {
                l++;
            }
            else if(a[l]+a[r]>sum)
            {
                r--;
            }
            else
            {
                count++;
                break;
            }
        }
    }

    cout<<count;

    return 0; 
}
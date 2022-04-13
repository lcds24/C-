#include <bits/stdc++.h>
using namespace std; 

void bubble_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main() {
    // 请补全代码，实现题目功能
    int n;
    cin>>n;
    int a[1005];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++)cin>>a[i];

    bubble_sort(a,n);
    display(a,n);

    return 0;
}
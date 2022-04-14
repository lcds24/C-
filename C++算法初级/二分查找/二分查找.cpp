#include <bits/stdc++.h>
using namespace std;

int a[100005];

int BinarySearch(int sub[],int lo,int hi,int fact)
{
	int mid;
	while(lo<hi)
	{
		mid=(lo+hi)>>1;
		if(sub[mid]>fact)hi=mid-1;
		else if(sub[mid]<fact)lo=mid+1;
		else
		return mid;
	}
	return -1;
}

int main() {

    memset(a,0,sizeof(a));

    int n;
    cin>>n;

    for(int i=0;i<n;i++)cin>>a[i];

    int x;cin>>x;

    int l=0;int r=n-1;

    int pos = BinarySearch(a,l,r,x);

    if(pos>=0)cout<<pos+1;
    else cout<<"not found";

    return 0;
}

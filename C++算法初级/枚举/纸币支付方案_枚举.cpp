#include <bits/stdc++.h>
using namespace std; 

int main() {
    // 请补全代码，实现题目功能
    int a,b,c,d,n,sum,num=0;//a,b,c,d 分别代表纸币的面值，sum是面值求和，num用于计数
    cin>>a>>b>>c>>d>>n;

    for(int i=0;i<=d;i++)
    {
        if(i*10>n)break;
        for(int j=0;j<=c;j++)
            {
                if(i*10+j*5>n)break;
                for(int k=0;k<=b;k++)
                {
                    if(i*10+j*5+k*3>n)break;
                    for(int l=0;l<=a;l++)
                    {
                        sum = i*10+j*5+k*3+l;
                        if(sum==n)
                        {
                            num+=1;
                        }
                        else if(sum>n)
                        {
                            break;
                        }
                    }
                }
            }
    }

    if(num)
        cout<<num<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}
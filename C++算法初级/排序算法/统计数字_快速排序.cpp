//这里有详解答案不一样，直接采用map

#include <bits/stdc++.h>
using namespace std;
  
int a[300000];                    // 防止越界
int main(){
    int n, s = 1;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    
    // TODO 请补全代码完成题目  

    map<int,int>mp;
    map<int,int>visit;
    for(int i=1;i<=n;i++)mp[a[i]]++;

    sort(a,a+n);
    
    for(int i=1;i<=n;i++)
    {
        if(!visit[a[i]])
        {
            cout<<a[i]<<" "<<mp[a[i]]<<endl;
            visit[a[i]]=1;
        }
    }

    return 0;
}


/*
//附上标准答案
#include <bits/stdc++.h>
using namespace std;

int a[300000];                    // 防止越界
int main(){
    int n, s = 1;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);        // 使用`sort`函数进行快速排序

    for(int i = 1; i <= n; i++){
        if(a[i] == a[i+1]){
            s++;                  // 计数
        }
        else{
            cout << a[i] << " " << s << endl;
            s = 1;
        }
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010];
int n;

int main() {
    // 输入
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    
    // 选择排序过程
    for (int i = 1; i < n; ++i) {  // 枚举应该归位的第i个元素，这里因为前n-1位归为以后，
                                   // 第n位也会归位，所以我们只枚举到n-1。
        int min_pos = i;           // 将最小值位置设置为当前范围i~n的首位
        for (int j = i + 1; j <= n; ++j) { // 将第i个元素和剩下的元素相比较
            if (a[j] < a[min_pos]) {       // 如果当前元素小于之前维护的最小值
                min_pos = j;               // 更改最小值出现的位置
            }
        }
        swap(a[i], a[min_pos]);            // 将最小值与第i个位置交换
    }
    
    // 输出
    for (int i = 1; i <= n; ++i) 
        cout << a[i] << ' ';
    return 0;
}
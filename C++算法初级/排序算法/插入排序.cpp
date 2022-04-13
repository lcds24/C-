#include <bits/stdc++.h>
#define N 1550
using namespace std;
int a[N], n;

int main() {
    // 输入
    cin >> n; 
    for (int i = 1; i <= n; ++i) cin >> a[i];
	
    // 插入排序
    for (int i = 2; i <= n; ++i) {    // 按照第2个到第n个的顺序依次插入
        int j, x = a[i];    // 先将i号元素用临时变量保存防止被修改。

        // 插入过程，目的是空出分界线位置j，使得所有<j的部分<=x，所有>j的部分>x。
        // 循环维持条件，j>1，并且j前面的元素>x。
        for (j = i; j > 1 && a[j - 1] > x; --j) {   
            // 满足循环条件，相当于分界线应向前移，
            // 分界线向前移，就等于将分界线前面>x的元素向后移
            a[j] = a[j - 1];              
                                                    
        }
        // 找到分界线位置，插入待插入元素x
        a[j] = x;                         
    }
	
    // 输出
    for (int i = 1; i <= n; ++i) cout << a[i] << ' ';
    cout << endl;
    return 0;
}
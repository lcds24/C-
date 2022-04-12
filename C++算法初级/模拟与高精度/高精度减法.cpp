/*
鉴于网站上高精度减法不是填空题要完全手撸，这里记录一下高精度减法的案例仅供参考
*/

#include <bits/stdc++.h>
#define N 11111
using namespace std;

int a_digits[N], b_digits[N];
int a_len, b_len;
int ans_digits[N], ans_len;
char str1[N], str2[N];
int main() {
    cin >> str1;
    // 获取高精度整数长度
    int a_len = strlen(str1);	
    for (int i = 0; i < a_len; ++i)
        // TODO 请补全下述代码
        a_digits[i] = str1[a_len-i-1]-'0'; // 将字符转换成数字，倒着存进数位数组
    
    cin >> str2;
    // 获取高精度整数长度
    int b_len = strlen(str2);	
    for (int i = 0; i < b_len; ++i)
        // TODO 请补全下述代码
        b_digits[i] = str2[b_len-i-1]-'0'; // 将字符转换成数字，倒着存进数位数组
    
    ans_len = max(a_len, b_len); 	// 初始长度
    int k = 0;						// 记录进位的变量
    for (int i = 0; i < ans_len; ++i) {
        // 假设a_len > b_len，这里需要保证b[b_len]到b[a_len - 1]的位置都是0，否则可能会出错。
        // TODO 请补全下述代码
        ans_digits[i] = a_digits[i]-b_digits[i]-k; // 减法计算
        
        if (ans_digits[i] < 0) {
            k = 1;
            // TODO 请补全下述代码
            ans_digits[i]+=10; // 减法借位
        } else k = 0; // 这里赋值成0很关键，而且容易遗漏

    }
    
    
    while (ans_len > 1 && !ans_digits[ans_len - 1]) // 只有长度大于1才可以去掉前导零
        --ans_len;
    
    // 3. 输出
    for (int i = ans_len - 1; i >= 0; --i) 
        cout << ans_digits[i];
    cout << endl;
}
#include bitsstdc++.h
#define N 110
using namespace std;
int a_digits[N] = {3, 2}, a_len = 2;
int b_digits[N] = {8, 6}, b_len = 2;
int a_digits[N] = {0}, a_len = 1;
int b_digits[N] = {9, 9}, b_len = 2;
int ans_digits[N  2], ans_len;
int main() {
    /*
     1. 数位操作
     考虑到(a位数×b位数)最多得到(a + b)位数，所以我们设置答案初始长度为a + b。
     另外考虑到第i位×第j位会贡献到(i + j)位，所以，我们用累加的方式计算答案的每一位。
     值得注意的是，这里累加的结果可能=10，所以按理说应该进位，但为了效率考虑，我们
     在后面统一维护进位，而不是一边加一边进。
    */

    ans_len = a_len + b_len;//初始化长度
    for (int i = 0; i<ans_len; ++i) ans_digits[i] = 0; 

    //因为是不断累加的形式，所以要将范围内的元素初始化为0。
    
    for (int i = 0; i<a_len;++i) 
        for (int j = 0; j<b_len;++j) 
            ans_digits[i + j] += a_digits[i]  b_digits[j];
            	
    //ans的每一位更新都要使用累加的形式，这是因为对于ans的第k位，满足i + j == k的(i, j)很多，所以可能答案的第k位可能先后被更新很多次。
    /*
     2. 统一进位
     上一步提到，因为累加后得到的答案各个数位有可能=10，所以要将其变成一个合法的高精度形式
     也就是说，要把=10的部分进位到下一位。所以我们用类似于高精度加法的方法维护。
     每一位只需要将自己的值和低位的进位相加，然后把=10的部分作为新的进位进到下一位。
    */

    int k = 0;
    for (int i = 0; i<ans_len; ++i) {
        ans_digits[i] += k;
        k = ans_digits[i] / 10;
        ans_digits[i] %= 10;
    }

    /*
     3. 维护长度
     上面提到，(a位数×b位数)最多得到(a + b)位数
     但考虑一个非零整数和0相乘的情况，答案的长度很可能降为1。所以我们需要向减法一样更新长度。
     只有当长度仍然1的时候，才需要去掉前导0
    */

    while (ans_len>1 && ans_digits[ans_len - 1] == 0) 
        --ans_len;
    
    //4. 输出

    for (int i = ans_len - 1; i = 0; --i) 
        cout<<ans_digits[i];
    cout<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
char str[20];

int main() {  
    scanf("%s", str);  
    int idx = 0;  
    int tmp = 0; // 识别码 
    int len = strlen(str);  
    for (int i = 0; i < len - 1; ++i){ 
        if ('0' <= str[i] && str[i] <= '9') {  
            ++idx;  
            // 在对字符数组中的数字字符做乘法运算时不要忘记减’0’转换为阿拉伯数字再进行计算;
            tmp = (tmp + (str[i] - '0') * idx) % 11;  
        } 
    }


    /*
    根据题目得出如果余数为10，则识别码为大写字母X这个不能漏掉！
    */
    char c;
    tmp==10?c='X':c=tmp+'0';// 计算识别码
    /*
    int类型转换为char:

    直接在int变量后加上一个’0’； 例如： int a = 10; printf(“%c\n”,a+’0’)

    char转换为int类型:

    char类型的变量减去一个‘0’； 例如： Char b = ‘5’; Printf(“%d\n”,b-‘0’)

    字符串转换成数字:

    用atoi，atol，atof函数，分别对应的是整型，long型，double型。 以整型为例： char str[]=“1234”; int a=atoi(str);

    数字换成字符串:

    用sprintf函数。以整型为例： char str[10]; int a=1234; sprintf(str,"%d",a);
    */
    if (str[len - 1] == c) 
        printf("Right");  
    else {
        str[len - 1] = c;  
        printf("%s", str);  
    }  
    return 0;  
}
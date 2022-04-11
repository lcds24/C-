#include<bits/stdc++.h>
using namespace std;


int n = 35;
int m = 94;

int main() {

    
    int tmp1 = m-2*n;//补全的代码即为有关y的公式  
    if (tmp1 < 0 || tmp1 % 2 != 0) {
        cout << "Invalid!" << '\n';
        return 0;
    }
    int y = tmp1 / 2;
    
    
    int tmp2=n-y; //补全的代码为x的公式  
    if (tmp2 < 0) {
        cout << "Invalid!" << '\n';
        return 0;
    }
    int x = tmp2;
    
    
    cout << "x = " << x << ", y = " << y << '\n';
    return 0;
}

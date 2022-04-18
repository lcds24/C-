#include <iostream>
using namespace std;

const int MOD = 998244353;


void daoxu(int n){
    long long temp =0;
    while(n)
    {
        temp = temp*10+n%10;
        n = n/10;
    }
    cout<<temp;
}

int main(){
    int n;
    cin >> n;
    daoxu(n);
    return 0;
}


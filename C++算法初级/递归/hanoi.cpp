#include <bits/stdc++.h>
using namespace std; 

void move(char A,char C)
{
    cout<<A<<" -> "<<C<<endl;
}

void hanoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        move(A,C);
    }
    else
    {
        hanoi(n-1,A,C,B);
        move(A,C);
        hanoi(n-1,B,A,C);
    }
}

int main() {

    int n;cin>>n;
    char A = 'A',B='B',C='C';
    hanoi(n,A,B,C);
    return 0;
}

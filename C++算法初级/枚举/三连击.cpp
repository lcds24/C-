

#include<iostream>
using namespace std;

   int a[10], vis[10] = {0};
   int x,y,z,  f = 0;    
   void print()
   {              
       cout<<a[1]*100+a[2]*10+a[3]<<" ";
       cout<<a[4]*100+a[5]*10+a[6]<<" ";
       cout<<a[7]*100+a[8]*10+a[9]<<endl;
       f = 1;                
   }
   void dfs(int n)                                      
   {
       for(int i = 1; i <= 9; i++)
       {
           if(vis[i] == 0){                                  // vis   用来判断是否重复
                a[n] = i;
               vis[i] = 1;
               if(n == 9&&            
                   (a[1]*100 + a[2]*10 + a[3])*y==
                   (a[4]*100 + a[5]*10 + a[6])*x&&
                   (a[4]*100 + a[5]*10 + a[6])*z==             //这个超级长的if  用来检验是否找完9个数和是否符合条件
                   (a[7]*100 + a[8]*10 + a[9])*y&&
                   (a[1]*100 + a[2]*10 + a[3])*z==
                   (a[7]*100 + a[8]*10 + a[9])*x)
                   print();
               else dfs(n + 1);
               vis[i] = 0;
           }
       }
   }
   int main(){
       cin>>x>>y>>z;
       dfs(1);              
       if(f == 0)
       cout<<"No!!!"<<endl; 
}


/*

//这个是网站上的题解

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main(){
    int a , b , c ;
    cin >> a >> b >> c ;
    int arr[10] = {1,2,3,4,5,6,7,8,9} ;
    bool check = false ;
    do{
        int num1 = arr[0] * 100 + arr[1] * 10 + arr[2] ;
        int num2 = arr[3] * 100 + arr[4] * 10 + arr[5] ;
        int num3 = arr[6] * 100 + arr[7] * 10 + arr[8] ;
        if ( a * num2 == b * num1 && c * num2 == b * num3 ){
            cout << num1 << " " << num2 << " " << num3 << endl ;
            check = true ;
        }
    } while(next_permutation(arr , arr + 9)); // 利用STL中的 next_permutation 全排列算法按照字典序产生排列
    if ( !check ){
        cout << "No!!!" << endl ;
    }
    return 0 ;
*/
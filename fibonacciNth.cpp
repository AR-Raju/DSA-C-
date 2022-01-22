#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
   int a = 0, b = 1;
   int nth = 0, tem;
   for(int i=2; i<n; i++){
      nth = a + b;
      tem = b;
      b = nth;
      a = tem;
   }
   return nth;
}

int update(int a)
{
   return a*a;
}

int main()
{
   int a = 14;
   //cin >> a;

   //int ans = fibo(n);
   //cout << n << "th fibonacci is: " << ans << endl;

   a = update(a);
   cout << "value of a is: " << a;
}

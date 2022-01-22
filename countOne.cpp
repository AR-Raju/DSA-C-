#include<bits/stdc++.h>
using namespace std;

int One(int n)
{
   int sum=0;
   while(n != 0){
      int bit = (n&1);
      if(bit == 1){
         sum += 1;
      }
      n = (n >> 1);
   }
   return sum;
}

int cnt(int a, int b)
{
   return (One(a) + One(b));
}

int main()
{
   int a, b;
   cin >> a >> b;

   int ans = cnt(a, b);
   cout << "Number of one in "<< a << " & "<<  b << " are: " << ans << endl;
}

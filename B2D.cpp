#include<bits/stdc++.h>
using namespace std;

int power(int n)
{
   int ans = 1;
   for(int j=1; j <=n; j++){
      ans *= 2;
   }
   return ans;
}

int main()
{
   int n;
   cin >> n;

   int ans = 0, i=0;

   while(n != 0){
      int digit = n%10;
      if(digit == 1){
            int p = power(i);
         ans += (digit*p);
      }
      n = n/10;
      i++;
   }
   cout << "Decimal of " << n << " is: " << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;

int power(int n)
{
   int ans = 1;
   for(int j=1; j <=n; j++){
      ans *= 10;
   }
   return ans;
}

int main()
{
   int n;
   cin >> n;
   int ans = 0, k = 0;

   while(n != 0){
      int bit = n & 1;
      cout << "bit:" << bit << endl;
      int p = power(k);
      ans += (bit * p);

      cout <<"ans:" << ans << endl;

      n = n >> 1;
      k++;
   }


   cout << "binary is-> " << ans << endl;
}

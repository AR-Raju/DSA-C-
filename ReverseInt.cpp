#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int ans = 0;
   while(n != 0){
      int digit = n % 10;
      ans = (ans * 10) + digit;
      if((ans > INT_MAX/10) || (ans < INT_MIN/10)){ cout << 0;return 0;}
      n = n / 10;
   }
   cout << ans;
}

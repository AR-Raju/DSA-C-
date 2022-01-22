#include<bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
   if(num&1){
         // odd
      return 0;
   }
   // even
   return 1;
}


int main()
{
   int a;
   cin >> a;

   bool ans = isEven(a);
   if(ans){
      cout << "Number is even\n";
   }
   else{
      cout << "Number is odd\n";
   }
}

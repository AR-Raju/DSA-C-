#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   for(int i = 2; i < n; i++){
      if(n % i == 0) return 0;
   }
   return 1;
}

int main()
{
   int n;
   cin >> n;

   bool ans = isPrime(n);
   if(ans){
      cout << "Prime\n";
   }
   else{
      cout << "Not Prime\n";
   }

}

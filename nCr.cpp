#include<bits/stdc++.h>
using namespace std;

int factorial(int a)
{
   int ans=1;
   for(int i = 1; i <= a; i++){
      ans *= i;
   }
   return ans;
}

int nCr(int n, int r)
{
   int nFact = factorial(n);
   int rFact = factorial(r);
   int nMinusRFact = factorial(n-r);

   return (nFact/(rFact * nMinusRFact));
}

int main()
{
   int n , r;
   cin >> n >> r;

   int result = nCr(n, r);
   cout << n << "C" << r << " = " << result << endl;
}

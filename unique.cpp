#include<bits/stdc++.h>
using namespace std;

int findUnique(int a[], int n)
{
   int ans = 0;
   for(int i=0; i<n; i++){
      ans = ans ^ a[i];
      cout << "ans: " << ans << endl;
   }
   return ans;
}


int main()
{
   int ar[7] = {1, 4, 6, 7, 2, 8, 1};

   int result = findUnique(ar, 7);
   cout << "Unique number is: " << result << endl;
}

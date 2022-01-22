#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
int cnt = 1;
   int i=1;
   while(i <= n){
   int space = n - i;

   while(space){
      cout << " ";
      space--;
   }
      int j = i;
      while(j){
         cout << cnt++;
         j--;
      }
      i++;
      cout << "\n";
   }
}





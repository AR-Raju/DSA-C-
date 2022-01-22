#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a = 4;
   int b = 6;

   cout << "a & b: " << (a&b) << endl; // 1 & 1 = 1 left all 0
   cout << "a | b: " << (a|b) << endl; // 0 | 0 = 0 left all 1
   cout << "a ^ b: " << (a^b) << endl; //  only 1 = 1 left all 0
   cout << "~a: " << (~a) << endl; // sign change less 1

   // shifting

   cout << "24 << 1: " << (24 << 1) << endl;
   cout << "24 << 2: " << (24 << 2) << endl;
   cout << "24 >> 1: " << (24 >> 1) << endl;
   cout << "24 >> 2: " << (24 >> 2) << endl;

   // increment/decrement

   int i=1, j=2;

   if(i-- > 0 && ++j > 2){
      cout << "State-1 inside if" << endl;
   }else{
      cout << "State-2 inside else" << endl;
   }

   int k=3;
   cout << (25 * (++k)) << endl;

   int l=1;
   int m = l++;
   int n = ++l;
   cout << "m n" << m << " " <<  n << endl;
}


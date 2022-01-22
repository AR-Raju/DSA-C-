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

int D2B(int n)
{
    int ans = 0, k = 0;

    while(n != 0)
    {
        int bit = n & 1;
        int p = power(k);
        ans += (bit * p);
        n = n >> 1;
        k++;
    }
    return ans;
}

char flip(char c)
{
   return (c=='0' ? '1': '0');
}

string findTwoCompliment(string bin, int len)
{
   int i;
   string one, two;
   one = two = "";

   //one'compliment
   for(i=0; i<len; i++){
      one += flip(bin[i]);
   }

   //two's compliment
   two = one;
   for(i=len-1; i>=0; i--){
      if(two[i] == '1'){
         two[i] = '0';
      }
      else{
         two[i] = '1';
         break;
      }
   }
   if(i == -1){
      two = '1' + two;
   }
   return two;
}


int main()
{
   int n, i;
   cin >> n;

   int m = abs(n);
   int bin = D2B(m);

   string str = to_string(bin);
   int sz = str.length();
   cout << "Binary of " << m << " is: " << str << "\nLength is: " << sz << endl;

   string fst = findTwoCompliment(str, sz);
   cout << "2's Compliment of " << m << " is: " << fst << endl;




}

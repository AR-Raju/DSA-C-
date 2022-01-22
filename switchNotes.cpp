#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;

   cout << endl;

   int one, twenty, fifty, hundred;
   one = twenty = fifty = hundred = 0;

   while(n != 0){
   switch(n)
   {
   case 1 ... 19:
      one += n;
      n = n - n;
      break;
   case 20 ... 49:
      twenty += 1;
      n -= 20;
      break;
   case 50 ... 99:
      fifty += 1;
      n -= 50;
      break;
   case 100 ... INT_MAX:
      int qt= n/100;
      hundred += qt;
      n -= (qt*100);
      break;

   }
   }
   cout << "Number of hundred, fifty, twenty & one taka notes are: " << hundred << " " << fifty << " " << twenty << " " << one << endl;
}

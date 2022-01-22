#include<bits/stdc++.h>
using namespace std;

void prArr(int a[], int n)
{
   for(int i = 0; i < n; i++){
      cout << a[i] << " ";
   }
   cout << endl;
}

void reArr(int a[], int n)
{
   int s = 0, e = n-1;
   while(s <= e){
      int tem = a[s];
      a[s] = a[e];
      a[e] = tem;
      s++;
      e--;
   }
   prArr(a, n);
}

int main()
{
   int s;
   cin >> s;
   int ar[100];

   for(int i = 0; i < s; i++){
      cin >> ar[i];
   }
   cout << "Before reversing\n";
   prArr(ar, s);
   cout << "After reversing\n";
   reArr(ar, s);
}

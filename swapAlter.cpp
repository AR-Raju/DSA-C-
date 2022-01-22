#include<bits/stdc++.h>
using namespace std;

void printArr(int a[], int n)
{
   for(int i = 0; i < n; i++){
      cout << a[i] << " ";
   }
   cout << endl;
}

void swapAlt(int a[], int n)
{
   for(int i = 0; i < n; i=i+2){
      if(i+1 < n){
         swap(a[i], a[i+1]);
      }
   }
}


int main()
{
   int a[8] = {2, 5, 8, 1, 0, 9, 3, 10};
   int b[5] = {5, 7, 1, 3, 9};

   cout << "Before AlterSwap a[]\n";
   printArr(a, 8);

   swapAlt(a, 8);

   cout << "After AlterSwap a[]\n";
   printArr(a, 8);

   cout << "Before AlterSwap b[]\n";
   printArr(b, 5);

   swapAlt(b, 5);

   cout << "After AlterSwap b[]\n";
   printArr(b, 5);
}

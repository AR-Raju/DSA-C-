#include<bits/stdc++.h>
using namespace std;

void prArr(int a[], int n)
{
   for(int i = 0; i < n; i++){
      cout << a[i] << " ";
   }
   cout << endl;
}

int sumArr(int a[], int n)
{
   int sum = 0;

   for(int i=0; i<n; i++){
      sum += a[i];
   }
   return sum;
}

int main()
{
   int s;
   cin >> s;

   int arr[100];

   for(int i = 0; i < s; i++){
      cin >> arr[i];
   }

   prArr(arr, s);
   int sum = sumArr(arr, s);
   cout << "Sum of array is: " << sum;
}

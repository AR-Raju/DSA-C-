#include<bits/stdc++.h>
using namespace std;

void addSum(int *ar, int s){
   int sum = 0;
   for(int i = 0; i<s; i++){
      sum += ar[i];
   }
   cout << sum << endl;
}

int main()
{
   /*
   int arr[10]={2, 45, 76, 87};

   cout << "address of first memory block is: " << arr << endl;
   cout << "address of first memory block is: " << &arr[0] << endl;
   // array traversal formula arr[i] = *(arr + i)
   // or i[arr] = *(i + arr)
   cout << "value of first " << *arr << endl;
   cout << "increment of first value " << *arr + 1 << endl;
   cout << "Second value " << *(arr + 1) << endl;
   cout << "increment of first value " << *(arr) + 1 << endl;
   cout << "Third value " << arr[2] << endl;
   cout << "Third value " << *(arr + 2) << endl;
   */
   /*
   char ch[5] = "abcd";
   cout << ch << endl;

   char *c = &ch[0];
   cout << c << endl;
   */
   int arr[6] = {3, 4, 2, 5,7, 8};
   addSum((arr + 3), 3);

   return 0;
}

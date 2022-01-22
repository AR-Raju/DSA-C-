#include<bits/stdc++.h>
using namespace std;

int main()
{
   int num = 5;
   int a = num;
   cout << "a before " << num << endl;
   a++;
   cout << "a after " << num << endl;

   // address of operator - &

   cout << "Address of num is " << &num << endl;

   int *ptr = &num;

   cout << "ptr value before " << num  << endl;
   (*ptr)++;
   cout << "ptr value after " << num << endl;

   cout << "ptr before " << ptr  << endl;
   ptr = ptr + 1;
   cout << "ptr after " << ptr << endl;

   // coping a pointer
   int *q = ptr;
   cout << ptr << "-" << q << endl;
   cout << *ptr << "-" << *q << endl;
   return 0;
}

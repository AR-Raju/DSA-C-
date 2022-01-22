#include<bits/stdc++.h>
using namespace std;

void update(int** p2)
{
   //p2 = p2 + 1; // nothing change
   //*p2 = *p2 + 1; // change p
   **p2 = **p2 + 1; // change i

}

int main()
{

   int i = 5;
   int *p = &i;
   int **p2 = &p;

   cout << "\n\n All runs well\n\n";


   cout << &i << endl;
   cout << " printing p " << p << endl;
   cout << " address of p " << &p << endl;

   cout << *p2 << endl;

   cout << " address of p " << p2 << endl;
   /*
   cout << " before " << i << endl;
   cout << " before " << p << endl;
   cout << " before " << p2 << endl;

   update(p2);

   cout << " after " << i << endl;
   cout << " after " << p << endl;
   cout << " after " << p2 << endl;

    int first = 6;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
      */

   return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a, b;
   char op;
   cin >> a >> b >> op;

   if(a<b){
      int temp = a;
      a = b;
      b = temp;
   }

   cout << "a & b: " << a << " & " << b << endl;
   switch(op)
   {
      case '+': cout << "Addition: " << a + b << endl;
                  break;
      case '-': cout << "Substruction: " << a - b << endl;
                  break;
      case '*': cout << "Multiplication: " << a * b << endl;
                  break;
      case '/': cout << "Division: " << a / b << endl;
                  break;
      case '%': cout << "Modulus: " << a % b << endl;
                  break;
      default: cout << "sorry invalid operation\n";

   }
}

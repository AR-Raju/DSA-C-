#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i <= n)
    {
       int j = n - i + 1;
       int p = 1;
        while(j){
         cout << p++;
         j--;
        }
        int Fst_star = i - 1;
        while(Fst_star){
         cout << "*";
         Fst_star--;
        }
        int Snd_star = i - 1;
        while(Snd_star){
         cout << "*";
         Snd_star--;
        }
        int k = n - i + 1;
        int pp = n - i + 1;
        while(k){
         cout << pp--;
         k--;
        }
        i++;
        cout << "\n";
    }

}







#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i <= n)
    {
        int space = n - i;
         int cnt = 1;
        while(space)
        {
            cout << " ";
            space--;
        }
        int j = i;

        while(j)
        {
            cout << cnt++;
            j--;
        }
        int scnt = i - 1;
        int k = 1;
        while(k <= i-1)
        {
            cout << scnt--;
            k++;
        }
        i++;
        cout << "\n";
    }

}






// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES

// Codestartshere:
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
void answercallX()
{
    int x;
    cin >> x;

    if (x <= 5)
    {
        cout << 1 << "\n";
    }
    else if (x > 5)
    {
        int n = x, cnt = 0;
        for (int i = 1; x > 0; i++)
        {
            x = x - 5;
            cnt++;
        }

        cout << cnt << "\n";
    }
}
int main()
{
    answercallX();
}
// Codeendshere:

// Copyrights And Code : Ajit Gavade
// From HP Pavilion 14 [MARK II]
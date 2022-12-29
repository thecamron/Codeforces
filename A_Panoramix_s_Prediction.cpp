// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES | CCG

// Codestartshere:

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <algorithm>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

// Definations
#define it int
#define ll long long
#define dbl double
#define li long int
#define bl bool
#define str string
#define ch char
#define vec vector

void ajitsolve()
{
    it n, m;
    cin >> n >> m;
    it ans;

    // bl f = flase;
    it g = n + 1, no = n + 1;

    for (it i = n + 1; i <= 50; i++)
    {
        it mul = 0;
        for (it j = i; j >= 1; j--)
        {
            if (i % j == 0)
            {
                mul += 1;
            }
        }
        if (mul == 2 && i == m)
        {
            ans = 1;
            break;
        }
        else if (mul == 2 && i != m)
        {
            ans = 0;
            break;
        }
    }
    if (ans == 0)
    {
        cout << "NO\n";
    }
    else if (ans == 1)
    {
        cout << "YES\n";
    }
}
int main()
{
    // it t;
    // cin >> t;
    // while (t--)
    // {
    ajitsolve();
    // }
}

// Execution Complete...
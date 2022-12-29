// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES | CCG

// Codestartshere:

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

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
    int k, n, w;
    cin >> k >> n >> w;
    int p = 0;
    for (int i = 1; i <= w; i++)
    {
        p = p + (k * i);
    }

    if (p - n > 0)
    {
        cout << p - n << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    // it t;
    // cin >> t;
    // while (t--)
    // {
    //     ajitsolve();
    // }

    ajitsolve();
}
// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES | CCG

// Codestartshere:

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;

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
    ll n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << " " << 0 << "\n";
    }
    else if (n == 1)
    {
        cout << 1 << " " << 0 << "\n";
    }
    else if (n == 2)
    {
        cout << 0 << " " << 1 << "\n";
    }
    else
    {
        int c11, c22, t, c1, c2;
        c11 = n / 3;
        c22 = n / 3;

        t = (c11 * 1) + (c22 * 2);
        if (n - t == 1)
        {
            c1 = c11 + 1;
            c2 = c22;
        }
        else if (n - t == 2)
        {
            c1 = c11;
            c2 = c22 + 1;
        }
        else
        {
            c1 = c11;
            c2 = c22;
        }
        cout << c1 << " " << c2 << "\n";
    }
}
int main()
{
    it t;
    cin >> t;
    while (t--)
    {
        ajitsolve();
    }
}

// Execution Complete...
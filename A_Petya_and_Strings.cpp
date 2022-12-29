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

// Digit Sum
int dsum(int n)
{
    int sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

void ajitsolve()
{

    str a, b;
    cin >> a;
    cin >> b;

    // ll ac = 0, bc = 0;

    for (it i = 0; i < a.length(); i++)
    {
        if (a[i] < 91)
        {
            a[i] = tolower(a[i]);
        }
        if (b[i] < 91)
        {
            b[i] = tolower(b[i]);
        }
    }
    // cout << a << " " << b << "\n";

    if (a == b)
    {
        cout << 0 << "\n";
    }
    else if (a < b)
    {
        cout << -1 << "\n";
    }
    else if (a > b)
    {
        cout << 1 << "\n";
    }
}
int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    ajitsolve();
    // }
}

// Execution Complete...
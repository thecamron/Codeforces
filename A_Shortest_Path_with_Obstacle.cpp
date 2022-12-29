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
    ll a1, a2, b1, b2, f1, f2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> f1 >> f2;
    it steps = abs(a1 - b1) + abs(a2 - b2);

    if ((a1 == b1 && a1 == f1 && min(a2, b2) < f2 && f2 < max(a2, b2)) || (a2 == b2 && a2 == f2 && min(a1, b1) < f1 && f1 < max(a1, b1)))
    {
        steps = steps + 2;
    }

    cout << steps << "\n";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ajitsolve();
    }
}

// Execution Complete...
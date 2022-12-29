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
    ll n, a = 0;
    cin >> n;

    for (ll i = 1; i <= 9; i++)
    {
        for (ll j = i; j <= n;)
        {
            a++;
            j = (j * 10) + i;
        }
    }
    cout << a << "\n";
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
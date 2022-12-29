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

    it n;
    cin >> n;
    it a = 0, b = 0, c = 0;

    while (n--)
    {
        it a1, b1, c1;
        cin >> a1 >> b1 >> c1;
        a = a + a1;
        b = b + b1;
        c = c + c1;
    }

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    // ll y;
    // cin >> y;
    // while (y--)
    // {
    ajitsolve();
    // }
}

// Execution Complete...
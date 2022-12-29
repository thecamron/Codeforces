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
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    // vector<int> v;

    if (i == 1 && j == 1 || i == n && j == m)
    {
        cout << 1 << " " << m << " " << n << " " << 1 << endl;
    }
    else
    {
        cout << 1 << " " << 1 << " " << n << " " << m << endl;
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

    // ajitsolve();
}

// Execution Complete...
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

    it n, m;
    cin >> n >> m;
    it t = 0;

    vec<int> v;
    for (it i = 0; i < n; i++)
    {
        it d;
        cin >> d;
        v.push_back(d);
        // if (d < 0)
        // {
        //     t = abs(d)+t;
        // }
    }
    sort(v.begin(), v.end());

    it ct = 0;
    for (auto i : v)
    {
        // cout << i;
        if (i < 0)
        {
            ct++;
            t = abs(i) + t;
        }
        if (ct == m)
        {
            break;
        }
    }

    cout << t << "\n";
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
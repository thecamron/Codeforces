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
    it n, c;
    cin >> n >> c;

    vec<it> v;
    it m1 = 0, m2 = 1, mx = 0;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
        m1 = m1 + 1;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            continue;
        }
        else
        {
            m2 = m2 + 1;
        }
        // if (i == n - 2 && v[i] != v[i + 1])
        // {
        //     m2 = m2 + 1;
        // }
    }
    cout << min(m1, m2) << endl;
}

int main()
{
    ll y;
    cin >> y;
    while (y--)
    {
        ajitsolve();
    }
}

// Execution Complete...
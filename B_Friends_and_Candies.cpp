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
    vec<it> v;
    it ct = 0, t = 0;

    for (it i = 0; i < n; i++)
    {
        it d;
        cin >> d;
        t = t + d;
        v.push_back(d);
    }
    it o = t / n;
    // cout << o << endl;
    if (t % n != 0)
    {
        ct = -1;
    }
    else
    {
        for (it j = 0; j < n; j++)
        {
            if (v[j] > o)
            {
                ct++;
            }
        }
    }

    cout << ct << endl;
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
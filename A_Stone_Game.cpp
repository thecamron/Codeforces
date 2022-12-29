// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES | CCG

// Codestartshere:

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <algorithm>

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
    it min = 100, max = 0;

    for (int i = 1; i <= n; i++)
    {
        it d;
        cin >> d;
        v.emplace_back(d);
    }
    it lrg = 0, lrs = 0;
    it g1 = 0, s1 = 101;
    for (it i = 0; i < n; i++)
    {
        if (v[i] > g1)
        {
            g1 = v[i];
            lrg = i + 1;
        }
        if (v[i] < s1)
        {
            s1 = v[i];
            lrs = i + 1;
        }
    }
    // cout << lrg << " " << lrs << endl;

    it rlg = (n - lrg) + 1, rls = (n - lrs) + 1;

    // cout << rlg << " " << rls << endl;

    if (rlg > lrg && rls > lrs)
    {

        int mx;
        int mn;
        if (lrg >= lrs)
        {
            mx = lrg;
            mn = lrs;
        }
        else
        {
            mx = lrs;
            mn = lrg;
        }
        cout << mx << "\n";
    }
    else if (lrg > rlg && lrs > rls)
    {
        it mx, mn;

        if (rlg >= rls)
        {
            mx = rlg;
            mn = rls;
        }
        else
        {
            mx = rls;
            mn = rlg;
        }

        cout << mx << "\n";
    }
    else if (lrg < rlg && lrs > rls)
    {
        cout << lrg + rls << "\n";
    }
    else if (lrg < rlg && lrs < rls)
    {
        cout << lrg + lrs << "\n";
    }
    else if ((lrg > rlg) == (lrs < rls))
    {
        cout << rlg + 1 << "\n";
    }
    else if (lrg > rlg && lrs < rls)
    {
        cout << rlg + lrs << "\n";
    }
    else if (lrg > rlg && lrs > rls)
    {
        cout << rlg + rls << "\n";
    }
    
    else
    {
        cout << "hee\n";
    }
    // for (it i = n; i >= 1; i--)
    // {
    //     if (v[i] > g2)
    //     {
    //         g2 = v[i];
    //         rlg = i;
    //     }
    //     if (v[i] < s2)
    //     {
    //         s2 = v[i];
    //         rlg = i;
    //     }
    // }
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
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
    // vec<it> v;
    it v[n];
    if (n % 2 == 1)
    {
        cout << -1 << "\n";
    }
    else
    {
        for (it i = 0; i < n; i++)
        {
            // v.push_back(i);
            v[i] = i + 1;
        }
        for (it i = 0; i < n; i++)
        {
            if (v[i] == i + 1 && i < n - 1)
            {
                // swap(v[i], v[i + 1]);
                it t;
                t = v[i];
                v[i] = v[i + 1];
                v[i + 1] = t;
                i++;
            }
            if (i + 1 == n && v[i] == i + 1)
            {
                it t = v[i];
                v[i] = v[i - 2];
                v[i - 2] = t;
            }
        }
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    // it t;
    // cin >> t;
    // while (t--)
    // {
    ajitsolve();
    // }
}

// Execution Complete...
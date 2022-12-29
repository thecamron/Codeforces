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
    str a;
    cin >> a;
    vec<int> v;
    // cout << a;
    it l = a.length();
    // cout << l << "\n";

    for (it i = 0; i < l; i++)
    {
        if (a[i] == '.')
        {
            v.push_back(0);
        }
        else if (a[i] == '-' && a[i + 1] == '.')
        {
            v.push_back(1);
            i++;
        }
        else if (a[i] == '-' && a[i + 1] == '-')
        {
            v.push_back(2);
            i++;
        }
    }

    for (auto i : v)
    {
        cout << i;
    }
    cout << "\n";
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
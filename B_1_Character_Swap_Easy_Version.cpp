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

    str s, t;
    it n;

    cin >> n;
    cin >> s;
    cin >> t;
    it d = 0;
    // sort(s[0], s[n - 1]);
    // sort(t[0], t[n - 1]);

    for (it i = 0; i < n; i++)
    {
        for (it j = 0; j < n; j++)
        {

            if (s[i] == t[i])
            {
                t[i] = '0';
                break;
            }
            
        }
    }
    cout << d << "\n";
    cout << t << "\n";

    // if (d == n - 2)
    // {
    //     cout << "Yes\n";
    // }
    // else
    // {
    //     cout << "No\n";
    // }
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
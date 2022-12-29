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
    ll n;
    cin >> n;
    str s;
    cin >> s;
    // vec<int> v;
    int d[n];

    for (it i = 0; i < n; i++)
    {
        // int d;
        cin >> d[i];
        // v.push_back(d);
    }
    ll ro = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            ro++;
        }
    }
    if (ro == n)
    {
        cout << 0 << "\n";
    }
    else
    {
        it steps = 0;
        int rc=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R' && i + 1 != n)
            {
                s[i + 1] = 'R';
                s[d[i]] = 'R';
            }
            else
            {
                s[d[i]] = 'R';
            }
            
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'R')
                {
                    rc++;
                    // cout<<rc<<" s";
                }
            }
            steps++;
            if (rc == n or i+1==n)
            {
                break;
            }
            
        }
        int rcn=0;
        for (int i = 0; i < n; i++)
        {
            // cout<<s[i];
            if (s[i] == 'R')
            {
                rcn++;
            }
        }
        if (rcn == n)
        {
            cout << steps << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
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
}

// Execution Complete...
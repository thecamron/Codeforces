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
    // cout << n;
    vec<it> v, vc;
    it ct[n], t = 0;
    for (it i = 0; i < n; i++)
    {
        it c;
        cin >> c;
        ct[i] = c;
        cout << c << " ";
        if (c == 1)
        {
            t++;
        }
        // ct.push_back(c);
    }
    for (it i = 0; i < n; i++)
    {
        it f;
        cin >> f;
        v.push_back(f);
        vc.push_back(f);
    }
    it sv = 0;

    // sort(vc.begin(), vc.end());

    // for (auto itr)
    // {
    //     cout << itr << " ";
    // }

    cout << " " << t << endl;
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
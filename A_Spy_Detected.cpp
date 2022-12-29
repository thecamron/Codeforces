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
    cin >> n;

    vec<int> v;
    for (it i = 0; i < n; i++)
    {
        it d;
        cin >> d;
        v.push_back(d);
    }
    it a, b, al, bll, ac = 0, bc = 0;
    a = v[0];
    for (it i = 0; i < n; i++)
    {
        if (v[i] == a)
        {
            ac++;
            al = i;
        }
        else
        {
            bc++;
            bll = i;
        }
    }
    // cout << ac << " " << bc << "\n";
    // cout << al << " " << bll << "\n";
    if (ac > bc)
    {
        cout << bll + 1 << "\n";
    }
    else
    {
        cout << al + 1 << "\n";
    }
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
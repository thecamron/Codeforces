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

    it sz;
    cin >> sz;

    it ar[150];

    dbl add = 0.0;
    dbl f = 0.0;
    for (it i = 0; i < sz; i++)
    {
        cin >> ar[i];
    }
    for (it i = 0; i < sz; i++)
    {
        add = add + ar[i];
    }

    f = add / sz;
    cout<<fixed<<setprecision(12)<<f<<"\n";
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
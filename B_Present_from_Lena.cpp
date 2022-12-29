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

    // it m = (n * 2) + 1;
    // it start = n;
    // it t = m;

    for (it i = -n; i <= n; i++)
    {
        it m = n - abs(i);
        for (it j = 0; j < abs(i); j++)
            cout << "  ";
        for (it k = 0; k < m; k++)
            cout << k << " ";
        for (it l = m; l > 0; l--)
            cout << l << " ";
        cout<<"0"<<endl;
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
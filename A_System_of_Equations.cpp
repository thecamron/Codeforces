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
    it n, m;
    cin >> n >> m;

    it fc=0;
    for (it i = 0; i <= m; i++)
    {
        for (it j = 0; j <= n; j++)
        {
            if (i * i + j == n && i + j * j == m)
            {
                // f = i;
                // s = j;
                fc++;
            }
        }
    }
    // cout << f << " " << s << "\n";  
    cout<<fc<<"\n";

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
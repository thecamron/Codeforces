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
    it a[n];
    for (it i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    str s, sa[n];
    cin >> s;

    for (it i = 0; i < n; i++)
    {
        ch c = s[i];
        it cr = a[i];
        for (it j = 0; j < n; j++)
        {
            if (a[j] == cr)
            {
                sa[j] = c;
            }
        }
    }
    cout << sa << endl;
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
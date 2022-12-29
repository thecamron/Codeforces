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
    vec<int> v;
    it s;
    cin >> s;
    for (it i = 0; i < s; i++)
    {
        it d;
        cin >> d;
        v.push_back(d);
    }
    sort(v.begin(), v.end());
    bl flag = true;
    for (it j = 0; j < s - 1; j++)
    {
        if (v[j] == v[j + 1])
        {
            flag = false;
        }
        else
        {
            continue;
        }
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
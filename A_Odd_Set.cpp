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
    it n2;
    cin >> n2;
    it n = n2 * 2;
    vec<int> v;
    it even = 0, odd = 0;

    for (it i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    for (auto itr = 0; itr < n; itr++)
    {
        if (v[itr] % 2)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (odd == even)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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
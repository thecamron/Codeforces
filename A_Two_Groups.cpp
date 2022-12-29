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
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
void ajitsolve()
{

    vector<int> v;
    int n;
    cin >> n;
    for (it i = 0; i < n; i++)
    {
        it d;
        cin >> d;
        v.push_back(d);
    }

    it p = 0, ne = 0;
    for (it i = 0; i < n; i++)
    {
        if (i >= 1)
        {
            p = p + v[i];
        }
        else
        {
            ne = ne + v[i];
        }
    }
    cout << ne << " " << p << endl;
    cout << abs(max(ne, p)) - abs(min(ne, p)) << "\n";
}
int main()
{
    it y;
    cin >> y;
    while (y--)
    {
        ajitsolve();
    }

    // ajitsolve();
}

// Execution Complete...
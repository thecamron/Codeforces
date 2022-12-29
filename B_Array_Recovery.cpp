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
    it n;
    cin >> n;
    vec<it> v;
    vec<it> da;
    for (it i = 0; i < n; i++)
    {
        it d;
        cin >> d;
        da.push_back(d);
    }
    v.push_back(da[0]);
    it ct = 1;
    for (it i = 1; i < n; i++)
    {
        v.push_back(da[i] + v[i - 1]);
    }
    bl f = true;
    for (auto i = 0; i < n; i++)
    {
        // cout << itr << " ";
        if (i == 0)
        {
            if (v[0] == da[0])
            {
                f = true;
                // cout << "a";
            }
            else
            {
                f = false;
                // cout << "b1";
                break;
            }
        }
        else
        {
            if (v[i - 1] + da[i] == v[i])
            {
                f = true;
                // cout << "a2";
            }
            else
            {
                f = false;
                // cout << "b2";
                break;
            }
        }
    }

    if (f)
    {
        // cout << "ans\n";
        for (auto utk : v)
        {
            cout << utk << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}
int main()
{
    it y;
    cin >> y;
    while (y--)
    {
        ajitsolve();
    }
}

// Execution Complete...
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

// Digit Sum
int dsum(int n)
{
    int sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

void ajitsolve()
{
    int n;
    cin >> n;
    // bl f = false;
    vec<int> vect;
    // int v[n];

    it x = 0, zero = 0;
    for (it i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        vect.push_back(d);
        if (d == 0)
        {
            zero++;
        }
    }
    it steps = 0;
    // if (v[0] > 0)
    // {
    //     s = s + v[0];
    // }
    if (is_sorted(vect.begin(), vect.end()))
    {
        steps = 0;
    }
    else
    {
        for (it i = 0; i < n; i++)
        {
            if (vect[i] == 1)
            {
                if (zero > 0)
                {
                    zero--;
                    steps++;
                }
            }
            else
            {
                if (zero > 0)
                {
                    zero--;
                }
            }
        }
    }
    cout << steps << "\n";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ajitsolve();
    }
}

// Execution Complete...
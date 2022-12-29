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
int exe(int n, int k, int a[], int b[])
{
    // exe:
    for (it i = n; i >= 1; i--)
    {
        if (k >= a[i])
        {
            k = k + b[i];
            a[i] = 0;
            b[i] = 0;
        }
    }
    for (it i = n; i >= 1; i--)
    {
        if (k >= a[i] && b[i] != 0 && a[i] != 0)
        {
            k = exe(n, k, a, b);
        }
        else
        {
            continue;
        }
    }
    return k;
}
void ajitsolve()
{

    it n;
    cin >> n;
    vec<it> v;

    for (it i = 0; i < n; i++)
    {
        it d;
        cin >> d;
        v.push_back(d);
    }
    bl f = false;
    it a, b, c;

    for (it i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            f = true;
            a = i;
            b = i + 1;
            c = i + 2;
            if (i >= 3 && v[i - 1] > v[i - 2])
            {
                a = i - 1;
            }
        }
        else
        {
            f = false;
            continue;
        }
    }
    if (f)
    {
        cout << "YES\n";
        cout << a << " " << b << " " << c << "\n";
    }
    else
    {
        cout << "NO\n";
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
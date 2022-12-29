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
    ll a, b, c, t1 = 0, t2 = 0;
    cin >> a >> b >> c;

    if ((abs(b - c) + abs(c - 1)) > abs(a - 1))
    {
        cout << 1 << "\n";
    }
    else if ((abs(b - c) + abs(c - 1)) < abs(a - 1))
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 3 << "\n";
    }

    // if (a == 1)
    // {
    //     t1 = 2;
    // }
    // else if (a == 2)
    // {
    //     t1 = 1;
    // }
    // else if (a == 3)
    // {
    //     t1 = 2;
    // }

    // if (c == 1)
    // {
    //     t2 = b - 1;
    // }
    // else if (c == 2)
    // {
    //     if (b == 1)
    //     {
    //         t2 = 2;
    //     }
    //     if (b == 3)
    //     {
    //         t2 = 2;
    //     }
    // }
    // else if (c == 3)
    // {
    //     if (b == 1)
    //     {
    //         t2 = 4;
    //     }
    //     if (b == 2)
    //     {
    //         t2 = 3;
    //     }
    // }

    // if(t1==t2)
    // {
    //     cout<<3<<"\n";
    // }
    // else if(t1>t2)
    // {
    //     cout<<2<<"\n";
    // }
    // else if(t1<t2)
    // {
    //     cout<<1<<"\n";
    // }

    // cout << t1 << " " << t2 << "\n";
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
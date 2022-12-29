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
// #define it int
#define ll long long
#define dbl double
#define li long int
#define bl bool
#define str string
#define ch char
#define vec vector
bl isgcd1(int a, int b)
{
    if (__gcd(a, b) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int ans[1000];
// int arr[1001];
// int s;
// int n;
void ajitsolve()
{
    int s;
    cin >> s;

    for (int i = 0; i <= 1000; i++)
    {
        ans[i] = 0;
    }
    for (int i = 1; i <= s; i++)
    {
        int d;
        cin >> d;
        ans[d] = max(i, ans[d]);
    }
    int sum = -1;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            // cout << "GCD: " << __gcd(a[i], a[j]) << endl;
            if (__gcd(i, j) == 1 && ans[i] && ans[j])
            {
                sum = max(sum, ans[i] + ans[j]);
            }
        }
    }
    // cout << sum << endl;
    // if (sum == INT_MIN)
    // {
    //     cout << -1 << "\n";
    // }
    // else
    // {
    //     cout << sum + 2 << "\n";
    // }
    cout << sum << "\n";

    // cin >> n;
    // s = -1;
    // for (int i = 0; i <= 1000; ++i)
    //     arr[i] = 0;
    // for (int i = 1, x; i <= n; ++i)
    // {
    //     cin >> x;
    //     arr[x] = max(arr[x], i);
    // }
    // for (int i = 1; i <= 1000; ++i)
    //     for (int j = 1; j <= 1000; ++j)
    //         if (__gcd(i, j) == 1 && arr[i] && arr[j])
    //             s = max(s, arr[i] + arr[j]);
    // cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ajitsolve();
    }
}

// Execution Complete...
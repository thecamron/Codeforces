// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES | CCG | USACO

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
    // int n;
    // cin >> n;
    // vector<int> v;
    // int mn = -1;

    // for (int i = 0; i < n; i++)
    // {
    //     it x;
    //     cin >> x;
    //     mn = min(mn, x);
    //     v.push_back(x);
    // }
    // sort(v.begin(), v.end());
    // vector<int> uq;
    // uq.push_back(v[0]);
    // for (int i = 1; i < n; i++)
    // {
    //     if (v[i] != v[i - 1])
    //     {
    //         uq.push_back(v[i]);
    //     }
    // }
    // // cout<<5/2<<" ";
    // int t = uq[uq.size() / 2];
    // if (uq.size() % 2 == 0)
    // {
    //     t--;
    // }

    // int sc = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] >= t)
    //     {
    //         sc++;
    //     }
    // }

    // cout << t * sc << " " << t << endl;

    int n;
    cin >> n;
    long long ans = 0;
    int cost = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (!mp[v[i]])
        {
            mp[v[i]] = n - i;
        }
    }
    for (auto x : mp)
    {
        if (ans < (long long)x.first * x.second)
        {
            ans = (long long)x.first * x.second;
            cost = x.first;
        }
    }
    cout << ans << " " << cost << endl;
}

int main()
{
    // it t;
    // cin >> t;
    // while (t--)
    // {
    //     ajitsolve();
    // }

    ajitsolve();
}

// Execution Complete...
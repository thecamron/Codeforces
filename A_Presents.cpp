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
    int x;
    cin >> x;
    // bool fc = true;

    vector<pair<int, int>> v;

    for (int i = 0; i < x; i++)
    {
        int d;
        cin >> d;
        v.push_back(make_pair(d, i + 1));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < x; i++)
    {
        cout << v[i].second << " ";
    }
    cout << "\n";
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
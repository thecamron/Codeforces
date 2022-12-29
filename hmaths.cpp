// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES

// Codestartshere:
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
void ajitsolve()
{
    string s;
    cin >> s;
    vector<char> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')

        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
        {
            cout << v[i];
        }
        else
            cout << v[i] << "+";
    }
}

int main()
{

    ajitsolve();
}
// Codeendshere:

// Copyrights And Code : Ajit Gavade
// From HP Pavilion 14 [MARK II]
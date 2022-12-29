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
    string s;
    cin >> s;
    bool f = false;

    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == "Y" or s[i] == "y")
        {
            if (s[i + 1] == "e" or s[i + 1] == "E")
            {
                if (s[i + 2] == "S" or s[i + 2] == "S")
                {
                    f = true;
                }
            }
        }
    }
    if (f)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
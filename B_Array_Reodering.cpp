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
    int n;
    cin >> n;
    vector<int> v1, v2;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // v.push_back(x);
        if (x % 2 == 0)
        {
            v1.push_back(x);
        }
        else
        {
            v2.push_back(x);
        }
    }
    // sort(v1.end(),v1.begin());
    // sort(v2.end(),v2.begin());

    for (int i = 0; i < v1.size(); i++)
    {
        a.push_back(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        a.push_back(v2[i]);
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<a[i]<<" ";
        for (int j = i + 1; j < n; j++)
        {

            if (__gcd(a[i], 2 * a[j]) > 1)
            {
                c++;
            }
        }
    }
    cout << c << endl;
}

int main()
{
    it t;
    cin >> t;
    while (t--)
    {
        ajitsolve();
    }

    // ajitsolve();
}

// Execution Complete...
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
    int s, n;
    cin >> n >> s;
    vector<int> v;
    // int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    int c = 0, cs = 0;

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (s >= v[i])
            {
                s = s - v[i];
                cs=s;
            }
            else
            {
                s = v[i] - s;
                cs = s;
            }
            c = i+1;
            if (s <= 0)
            {
                break;
            }
            cout<<c<<" "<<cs<<"\n";
        }
        if (s <= 0)
        {
            break;
        }
    }
    cout << c << " " << cs << "\n";
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
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
    it n;
    cin >> n;
    set<it> a;
    for (it i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        a.insert(d);
    }
    it ct = 10 - a.size();
   
    cout << 6 * ct * (ct - 1) / 2 << endl;
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
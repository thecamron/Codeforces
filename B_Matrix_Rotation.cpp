// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES | CCG

// Codestartshere:

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <algorithm>

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
    int a1, a2, b1, b2;

    cin >> a1 >> a2;
    cin >> b1 >> b2;

    if (a1 <= a2 && b1 <= b2 && a1 < b1 && a2 < b2)
    {
        cout << "YES\n";
    }
    else
    {
        // int c = 3;
        bool f = false;

        for (int i = 0; i <= 3; i++)
        {
            if (a1 <= a2 && b1 <= b2 && a1 < b1 && a2 < b2)
            {
                // cout << "YES\n";
                f = true;
                break;
            }
            else
            {
                int temp1 = a1;
                int temp2 = a2;
                int temp3 = b2;
                a1 = b1;
                a2 = temp1;
                b2 = temp2;
                b1 = temp3;
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
}
int main()
{

    // ajitsolve();
    it y;
    cin >> y;
    while (y--)
    {
        ajitsolve();
    }
}

// Execution Complete...
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
    str a;
    cin >> a;
    vec<char> v;
    for (it i = 0; i < a.length(); i++)
    {
        if (a[i] != 'A' && a[i] != 'a' && a[i] != 'O' && a[i] != 'o' && a[i] != 'Y' && a[i] != 'y' && a[i] != 'E' && a[i] != 'e' && a[i] != 'U' && a[i] != 'u' && a[i] != 'I' && a[i] != 'i')
        {
            v.push_back('.');
            if (a[i] >= 65 && a[i] <= 90)
            {
                a[i] = a[i] + 32;
                v.push_back(a[i]);
            }
            else
            {
                v.push_back(a[i]);
            }
        }
    }
    for (auto itr : v)
    {
        cout<<itr;
    }
    cout<<"\n";
}

int main()
{

    ajitsolve();
}

// Execution Complete...
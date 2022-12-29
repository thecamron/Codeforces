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

    int a = 0, A = 0;
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s[i] >= 65 && s[i] <= 90)
        {
            A++;
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            a++;
        }
        
    }
    // cout<<"Cap "<<A<<"SML "<<a;

    if (a >= A)
    {
        // small
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                string p;

                p = s[i] + 32;
                cout << p;
            }
            else
            {
                cout << s[i];
            }
        }
    }
    else
    {
        

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                string p;
                p = s[i] - 32;
                cout << p;
            }
            else
            {
                cout << s[i];
            }
        }
    }
}

int main()
{

    ajitsolve();
}
// Codeendshere:

// Copyrights And Code : Ajit Gavade
// From HP Pavilion 14 [MARK II]
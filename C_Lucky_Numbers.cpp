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
    it n;
    cin >> n;
    it ct=0;
    for(it i=1;i<=n;i++)
    {
        if(i+2%10==0 or i+3%10==0)
        {
            ct++;
        }
    }
    cout<<ct<<"\n";
   
}
int main()
{
    // it t;
    // cin >> t;
    // while (t--)
    // {
    ajitsolve();
    // }
}

// Execution Complete...
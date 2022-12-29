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
#define ll long long
void ajitsolve()
{
    ll n, k;
    cin >> n >> k;
    
    if(k<=(n+1)/2)
    {
        cout<<k*2-1<<"\n";
    }
    else
    {
        cout<<(k-(n+1)/2)*2<<"\n";
    }

    
}

int main()
{

    ajitsolve();
}
// Codeendshere:

// Copyrights And Code : Ajit Gavade
// From HP Pavilion 14 [MARK II]
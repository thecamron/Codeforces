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

void ajitsolve()
{
        it n;
        cin>>n;
        str a;
        cin>>a;
        it cnt=0;
        // vector<vector<int>>v;

        for(int i=0;i<a.length();i++)
        {
                if(a[i]==a[i+1])
                {
                    cnt++;
                }
        }
        cout<<cnt<<"\n";
}

int main()
{

    ajitsolve();
}

// Execution Complete...
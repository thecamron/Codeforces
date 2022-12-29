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
    int s;
    cin >> s;
    vector<int>v;
    int mx=INT_MIN;
    for(int i=0;i<s;i++)
    {
        int d;
        cin>>d;
        mx=max(mx,d);
        v.push_back(d);
    }
    // sort(v.begin(),v.end());

    if(s<3)
    {
        cout<<-1<<"\n";
    }
    else
    {
        // cout<<"mx "<<mx;
        int tc[mx+1]={0},mc=-1;
        bool t=0;
        for(int i=0;i<s;i++)
        {
            // cout<<v[i];
            int e=v[i];
            tc[e]++;
        }

        for(int i=0;i<=mx;i++)
        {
            // cout<<tc[i]<<" ";
            if(tc[i]>=3)
            {
                mc=i;
                // t=true;
                // break;
            }
        }


        cout<<mc<<"\n";


        // if(tc>=3)
        // {
        //     cout<<t<<"\n";
        // }
        // else
        // {
        //     cout<<-1<<"\n";
        // }

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

    // ajitsolve();
}

// Execution Complete...
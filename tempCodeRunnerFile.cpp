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
    int n,k;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }   

    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(c[i],t[i]));
    }

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    cout<<endl;


   
    
    
     
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
//Copyrights And Code : Ajit Gavade PICT Pune 
//From HP Pavilion 14 [MARK II]
// YEAR 2022
// | CODEFORCES |

//Codestartshere:
#pragma GCC optimize("O3,unroll-loops")
 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
void answercallX()
{
    int n,k,ct,cnt=0;
    cin>>n>>k;

    vector<int>v ;
    vector<int>v2;
    for(int i=1;i<=n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
        if(i==k)
        {
            ct=d;
           // cout<<ct;
        }
    }
    for(auto it:v)
    {
        if(it>=ct && it>0)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";

}
int main()
{    
    answercallX();
}
//Codeendshere:

//Copyrights And Code : Ajit Gavade
//From HP Pavilion 14 [MARK II]
#pragma GCC optimize("O3,unroll-loops")
 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
int answercallX()
{
    vector<int>v;
    for(int i=1;i<=3;i++)
    {   int d;
        cin>>d;
        v.push_back(d);
    }
    
    int a=0;
    for(auto it:v)
    {
        a+=it;
    }
    return a;
    
    
}
int main()
{
    int t;
    cin>>t;
    vector<int> ans;
    while(t--)
    {
        ans.push_back(answercallX());
    }
    //int q;
   // q= *max_element(ans.begin(),ans.end());
    // cout<<q<<"\n";
    int add=0;
    for(auto it:ans)
    {
        if(it>=2)
        {
            add+=1;
        }
        // add+=1;
    }
    cout<<add<<"\n";

}
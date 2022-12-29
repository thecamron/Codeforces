//Copyrights And Code : Ajit Gavade PICT Pune 
//From HP Pavilion 14 [MARK II]
// YEAR 2022
// CODECHEF | CODEFORCES

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
    string s1,s2;
    cin>>s1;
    cin>>s2;

    if(s1==s2)
    {
        cout<<0<<endl;
    }
    else if(s1<s2)
    {
        cout<<-1<<endl;
    }
    else if(s1>s2)
    {
        cout<<1<<endl;
    }
    
    
}
int main()
{
    
    answercallX();
    
    

}
//Codeendshere:

//Copyrights And Code : Ajit Gavade
//From HP Pavilion 14 [MARK II]
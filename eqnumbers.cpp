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
    int a,b,c;
    cin>>a>>b;
    c=abs(b-b);
    if(a==b)
    {
        cout<<"YES \n";
    }
    else
    {
       if(c%2==0)
       {
        cout<<"YES \n";
       }
       else
       {
        cout<<"NO \n";
       }
    }
   

}
int main()
{    
    int t;
    cin>>t;

    while(t--){
    answercallX();
    }
}
//Codeendshere:

//Copyrights And Code : Ajit Gavade
//From HP Pavilion 14 [MARK II]
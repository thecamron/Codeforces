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



//Definations
#define i int
#define ll long long
#define dbl double
#define li long int
#define bl bool


void ajitsolve()
{
  int n,k;
  cin>>n>>k;

  while(k--)
  {
    if(n%10==0)
    {
        n=n/10;
    }
    else
    {
        n=n-1;
    }

  }
  cout<<n<<"\n";

    
}

int main()
{

    ajitsolve();
}


//Execution Complete...
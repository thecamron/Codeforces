// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES

// Codestartshere:

#include <bits/stdc++.h>
using namespace std;
void ajit()
{

    long int x;
    cin >> x;
    vector<char> v;
    vector<char> v2={'T','i','m','u','r'};

    for (long int i = 1; i <= x; i++)
    {
        char a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());


    if(v==v2)
    {
        cout<<"YES\n";

    }
    else
    {
        cout<<"NO\n";
    }
    
    // if(x>5 or x<5)
    // {
    //     cout<<"NO\n";
    // }
    // else
    // {
    // int count = 0;
    // for (auto it : v)
    // {
    //     if (it == 'T' or it == 'i' or it == 'm' or it == 'u' or it == 'r')
    //     {
    //         count += 1;
    //     }
    // }
    // if (count == 5)
    // {
    //     cout << "YES\n";
    // }
    // else
    // {
    //     cout << "NO\n";
    // }
    //}



}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ajit(); // call for meathod which execute actual process for the problem statement given.
    }
    return 0;
}

// Codeendshere:

// Copyrights And Code : Ajit Gavade
// From HP Pavilion 14 [MARK II]
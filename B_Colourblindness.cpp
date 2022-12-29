// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES

// Codestartshere:

#include <bits/stdc++.h>
using namespace std;
void ajitt()
{

    int n;
    cin >> n;

    string a1, a2;
    cin >> a1;
    cin >> a2;

    if (a1 == a2)
    {
        cout << "YES\n";
    }
    else
    {
        for (int i = 0; i <= a1.size(); i++)
        {
            if (a1[i] == 'B')
            {
                a1[i] = 'G';
            }
            if (a2[i] == 'B')
            {
                a2[i] = 'G';
            }
        }
        if (a1 == a2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    // int  v1[n];
    // int v2[n];

    // for (long int i = 1; i <= n; i++)
    // {
    //     cin>>v1[i];
    // }

    // for (long int i = 1; i <= n; i++)
    // {
    //     cin>>v2[i];
    // }

    // // sort(v1.begin(),v1.end());
    // // sort(v2.begin(),v2.end());

    // if (v1 == v2)
    // {
    //     cout << "YES\n";
    // }
    // else
    // {
    //     for (long int i = 1; i <= n; i++)
    //     {
    //         if (v1[i] == 'G')
    //         {
    //             v1[i] = 'B';
    //         }
    //     }
    //     for (long int i = 1; i <= n; i++)
    //     {
    //         if (v1[i] == 'G')
    //         {
    //             v1[i] = 'B';
    //         }
    //     }

    //     if(v1==v2)
    //     {
    //         cout<<"YES\n";
    //     }
    //     else
    //     {
    //         cout<<"NO\n";
    //     }
    // }

    // for (auto at : v1)
    // {
    //     cout << at << "  v1";
    // }
    // cout << endl;
    // for (auto at : v2)
    // {
    //     cout << at << " v2";
    // }
    // cout<<endl;
}
void ajit()
{

    int n;
    cin >> n;

    string a1, a2;
    cin >> a1;
    cin >> a2;

    if (a1 == a2)
    {
        cout << "YES\n";
    }
    else
    {
        for (int i = 0; i <= a1.size(); i++)
        {
            if (a1[i] == 'B')
            {
                a1[i] = 'G';
            }
            if (a2[i] == 'B')
            {
                a2[i] = 'G';
            }
        }
        if (a1 == a2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    // int  v1[n];
    // int v2[n];

    // for (long int i = 1; i <= n; i++)
    // {
    //     cin>>v1[i];
    // }

    // for (long int i = 1; i <= n; i++)
    // {
    //     cin>>v2[i];
    // }

    // // sort(v1.begin(),v1.end());
    // // sort(v2.begin(),v2.end());

    // if (v1 == v2)
    // {
    //     cout << "YES\n";
    // }
    // else
    // {
    //     for (long int i = 1; i <= n; i++)
    //     {
    //         if (v1[i] == 'G')
    //         {
    //             v1[i] = 'B';
    //         }
    //     }
    //     for (long int i = 1; i <= n; i++)
    //     {
    //         if (v1[i] == 'G')
    //         {
    //             v1[i] = 'B';
    //         }
    //     }

    //     if(v1==v2)
    //     {
    //         cout<<"YES\n";
    //     }
    //     else
    //     {
    //         cout<<"NO\n";
    //     }
    // }

    // for (auto at : v1)
    // {
    //     cout << at << "  v1";
    // }
    // cout << endl;
    // for (auto at : v2)
    // {
    //     cout << at << " v2";
    // }
    // cout<<endl;
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
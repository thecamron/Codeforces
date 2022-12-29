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
// #define it int
#define ll long long
#define dbl double
#define li long int
#define bl bool
#define str string
#define ch char
#define vec vector
bl isgcd1(int a, int b)
{
    if (__gcd(a, b) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void ajitsolve()
{
    // char a[8][8];
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }

    // int r=0,b=0;
    // bl f=true;

    // char f='R';
    // for (it i = 0; i < 8; i++)
    // {
    //     for (it j = 0; j < 8; j++)
    //     {
    //         if(a[i][j]=='.')
    //         {
    //             continue;
    //        }
    //        else
    //        {
    //             if(a[i][j]=='R')
    //             {
    //                 if(a[i+1][j]=='R')
    //                 {
    //                     for(int p=0;p<8;p++)
    //                     {
    //                         if(a[p][j]=='R')
    //                         {
    //                             continue;
    //                         }
    //                         else
    //                         {

    //                         }
    //                     }
    //                 }
    //             }
    //        }

    //     }
    // }

    // for (int k = 0; k < 8; k++)
    // {
    //     for (int q = 0; q < 8; q++)
    //     {
    //         cout << a[k][q];
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";

    char a[10][10];
    bool flg = false, flgb = false;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
                flg = true;
            if (a[i][j] == 'B')
                flgb = true;
        }
    }

    for (int i = 0; i < 8; i++)
    {

        if (a[i][0] == 'R' && a[i][1] == 'R' && a[i][2] == 'R' && a[i][3] == 'R' && a[i][4] == 'R' && a[i][5] == 'R' && a[i][6] == 'R' && a[i][7] == 'R')
        {
            cout << "R\n";
            break;
        }
        else if (a[0][i] == 'B' && a[1][i] == 'B' && a[2][i] == 'B' && a[3][i] == 'B' && a[4][i] == 'B' && a[5][i] == 'B' && a[6][i] == 'B' && a[7][i] == 'B')
        {
            cout << "B\n";
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ajitsolve();
    }
}

// Execution Complete...
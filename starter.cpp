// Copyrights And Code : Ajit Gavade PICT Pune
// From HP Pavilion 14 [MARK II]
//  YEAR 2022
//  CODECHEF | CODEFORCES | CCG

// Codestartshere:

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <algorithm>

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

    // vector<int> v1;
    int n;
    cin >> n;
    int flag = 1;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        if (data == 0)
        {
            flag = 0;
        }
        else if (data < 0)
        {
            j++;
        }
    }

    if (flag == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (j % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
int main()
{
    it y;
    cin >> y;
    while (y--)
    {
        ajitsolve();
    }
}

// Execution Complete...
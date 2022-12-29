//copyrights And Code : Ajit Gavade
//From HP Pavilion 14
//codestartshere:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
         int a[2][2],cnt=0;

        for(int i = 0 ; i <= 0;i++)
        {
            for(int j= 0; j<=0;j++)
            {
                cin>>a[i][j]>>a[i][i+1];
                cin>>a[i+1][j]>>a[i+1][i+1];
            }
        }

        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                if(a[i][j] == 0)
                {
                    continue;
                }
                else{
                    a[i][j]=0;
                    if(i==cnt)
                    {
                        cnt++;
                    }
                    

                }
            }
            
        }

        cout<<cnt<<"\n";

    

	}
	return 0; 
	
} 
//copyrights And Code : Ajit Gavade
//From HP Pavilion 14
//codeendshere:

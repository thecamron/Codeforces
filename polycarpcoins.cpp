//Copyrights And Code : Ajit Gavade PICT Pune 
//From HP Pavilion 14 [MARK II]
// YEAR 2022
// CODECHEF | CODEFORCES

//Codestartshere:

#include<bits/stdc++.h>
using namespace std;
void ajit()
{
	 
		int n;
        cin>>n;

        if(n<=2)
        {
            if(n==2)
            {
                cout<<0<<" "<<1<<endl;
            }
            if(n==1)
            {
                cout<<1<<" "<<0<<endl;
            }
        }
        else if(n>2)
        {
            if(n%3==0)
            {
                int c1,c2;

                c1=(n/3);
                c2=(n/3);

                cout<<c1<<" "<<c2<<endl;
            }
            else
            {
                int c1,c2;
                if(n%3==1)
                {
                    c1=(n/3);
                    c2=(n/3);
                    cout<<c1+1<<" "<<c2<<endl;

                }
                else if(n%3==2)
                {
                    c1=(n/3);
                    c2=(n/3);

                    cout<<c1<<" "<<c2+1<<endl;
                }

             }
        }
        
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
       ajit();//call for meathod which execute actual process for the problem statement given.
        
	}
	return 0;
	
}

//Codeendshere:

//Copyrights And Code : Ajit Gavade
//From HP Pavilion 14 [MARK II]
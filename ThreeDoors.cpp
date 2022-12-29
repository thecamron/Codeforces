//copyrights And Code : Ajit Gavade PICT Pune 
//From HP Pavilion 14
// Date 11-07-2022 Sunday 
// June Long challenge 1 (Division 4)
//codestartshere:
#include<bits/stdc++.h>
using namespace std;
void ajit()
{
	
    int n,a,b,c;
    cin>>n;
    cin>>a>>b>>c;

    if(n==3)
    {
        if(c==2)
        {
            if(b==1)
            {
                 cout<<"YES"<<endl;
            }
            else
            {
            cout<<"NO"<<endl;
            }
        }
        else if(c==1)
        {
            if(a==2)
            {
                cout<<"YES"<<endl;
            }
            else
        {
            cout<<"NO"<<endl;
        }
            
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    else if(n==2)
    {
        if(b==1)
        {
            if(a==3)
            {
                cout<<"YES"<<endl;
            }
            else
        {
            cout<<"NO"<<endl;
        }
        }
        else if(b==3)
        {
            if(c==1)
            {
                cout<<"YES"<<endl;
            }
            else
        {
            cout<<"NO"<<endl;
        }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
    else
    {
        if(a==2)
        {
            if(b==3)
            {
                cout<<"YES"<<endl;
            }
            else
        {
            cout<<"NO"<<endl;
        }

        }
        else if(a==3)
        {
            if(c==2)
            {
                cout<<"YES"<<endl;
            }
            else
        {
            cout<<"NO"<<endl;
        }
        }
        else
        {
            cout<<"NO"<<endl;
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

//codeendshere:

//copyrights And Code : Ajit Gavade
//From HP Pavilion 14


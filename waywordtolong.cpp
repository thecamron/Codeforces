//Copyrights And Code : Ajit Gavade PICT Pune 
//From HP Pavilion 14 [MARK II]
// YEAR 2022
// CODECHEF | CODEFORCES

//Codestartshere:

#include<bits/stdc++.h>
using namespace std;
void ajit()
{
	 
    string s;
    cin>>s;

    int z = s.size();
        
    if(z>10)
    {
          cout<<s[0]<<z-2<<s[z-1]<<endl;  
    }
    else
    {
        cout<<s<<endl;
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
//Copyrights And Code : Ajit Gavade PICT Pune 

#include<bits/stdc++.h>
using namespace std;
int ajit(int n)
{
	if(n==0) return 1;
	return ajit(n-1)*n;


		
}
int main()
{
	int t;
	cin>>t;
	
	
		
       cout<<ajit(t)<<endl;//call for meathod which execute actual process for the problem statement given.
        

	return 0;
	
}

//Codeendshere: 
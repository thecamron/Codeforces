//Copyrights And Code : Ajit Gavade PICT Pune 

#include<bits/stdc++.h>
using namespace std;
void ajit()
{
	 int d;

     cin>>d;

     int s2,s3;

     s2=ceil(d/2);
     s3=ceil(d/3);

    //  cout<<s2<<endl;
    //  cout<<s3<<endl;


     if(s2==s3)
     {
        cout<<s2<<endl;
     }
     else if(s2>s3){
        cout<<s3<<endl;     
     }
     else{
        cout<<s2<<endl;
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
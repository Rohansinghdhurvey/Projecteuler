#include<iostream>
using namespace std;
int main() 
{ 
  
 int t; 
 cin>>t; 
 long long  y; 
 y = t; 
 long long i; 
 for(i=t;i>=1;i--) 
 { if(y%i!=0)
    {  
	  y=y+t; 
	  i=t; 
	} 
}
	cout<<y; 
	return 0; 
}
	

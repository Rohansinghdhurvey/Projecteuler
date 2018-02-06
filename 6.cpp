#include<iostream>
using namespace std;
int powe(int a,int b)
{
	int prod=1;
	for(int i=1;i<=b;i++)
	{
		prod=prod*a;
	}
return prod;	
}
int main()
{
	 int n;
	 cin>>n;
	 long sum1=0;
	 long sum2=0;
	 for(int i=1;i<=n;i++)
	 {
	 	sum2+=powe(i,2);
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	sum1+=i;
	 }
	 cout<<powe(sum1,2)-sum2;
	 return 0;
}

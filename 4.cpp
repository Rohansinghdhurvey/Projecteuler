#include<iostream>
using namespace std ;
int palin(int n)
{
	int d,s1=0,n2=n;
	while(n>0)
	{
		d=n%10;
		s1=s1*10+d;
		n/=10;
	}
	if(s1==n2)
	{
		return n2;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,largest=0;
	cin>>n;
	for(int i=100;i<999;i++)
	{
		for(int j=100;j<999;j++)
		{
			if(palin(i*j) && (i*j)>largest && (i*j)<n)
			{
			largest=i*j;
		   }
		}
	}
	cout<<largest;
	return 0;
}

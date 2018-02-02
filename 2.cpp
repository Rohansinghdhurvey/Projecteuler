#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long s=0;
	int a=0,b=1,c=0;
	while(n>c)
	{
		c=a+b;
		if(n>c && c%2==0)
		{
			s=s+c;
		}
		a=b;
		b=c;
		n--;
	}
	cout<<s;
	return 0;
}

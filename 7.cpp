#include<iostream>
using namespace std;
int main()
{
	int t,z;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long n,i,j,c,f=0;
		cin>>n;
		for(i=2,c=1;c<=n;i++)
		{
			f=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					f=1;
					break;					
				}
			}
			if(f==0)
			{
				z=i;
				c++;
			}
		}
		cout<<z;
		
	}
return 0;
}

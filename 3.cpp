#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
long long int n,i;
cin>>n; 
for(i=2;i<=(int)sqrt(n);)
{         
      if(n%i==0)
      {              
         n/=i;                                         
       }

       else
        i++;           
}
cout<<n;
return 0;
}

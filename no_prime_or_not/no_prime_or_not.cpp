#include <iostream>
using namespace std;
int main()
{
int n,flag=0;;
cout <<"Enter a number:";
cin>>n;
int i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==1)
{
cout<<"Not a prime number";
}
else
cout <<"Prime number";
}
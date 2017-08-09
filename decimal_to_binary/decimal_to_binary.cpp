#include "iostream"
using namespace std;
int main()
{
int a,i,n[20],x;
cout <<"Enter decimal number:";
cin>>a;
int temp=0;
i=0;
while(a>0)
{
x=a%2;
n[i]=x;
//cout <<"\n"<<n[i]<<"\n";
a=a/2;
i++;
temp++;
}

for(i=temp-1;i>=0;i--)
{
cout <<n[i];
}
return 0;
}
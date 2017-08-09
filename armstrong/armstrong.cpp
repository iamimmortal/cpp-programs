#include "iostream"
using namespace std;
int main()
{
int n;
cout << "Enter a number:"<<"\n";
cin >>n;
int digit,temp,arm=0;
temp=n;
while(n>0)
{
digit=n%10;
arm=arm+(digit*digit*digit);
n=n/10;
}
if(arm==temp)
{
cout <<("The number is armstrong");
}
else
{
printf("Not a armstrong");
}
}
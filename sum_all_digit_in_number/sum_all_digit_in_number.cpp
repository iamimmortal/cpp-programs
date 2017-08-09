#include "iostream"
using namespace std;
int main()
{
int n;
cout << "Enter a number:"<<"\n";
cin >>n;
int digit,arm=0;
while(n>0)
{
digit=n%10;
arm=arm+digit;
n=n/10;
}
cout << arm;
}
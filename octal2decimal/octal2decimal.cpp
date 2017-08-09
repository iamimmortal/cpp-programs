#include<iostream>
#include<math.h>
using namespace std;
class OctalToDecimal
{
int n;
public:
void passing(int*);
int oct();
};
//passing value to private data
void OctalToDecimal::passing(int *x)
{
n=*x;
}
int OctalToDecimal::oct()
{
int x;
int i=0;
int result=0;
while(n>0)
{
x=n%10;
result=result+(x*pow(8,i));
n=n/10;
i++;
}
return result;
}

//main
int main()
{
OctalToDecimal od;
int n;
cout <<"Enter octal number:";
cin>>n;
od.passing(&n);
cout<<od.oct();
return 0;
}
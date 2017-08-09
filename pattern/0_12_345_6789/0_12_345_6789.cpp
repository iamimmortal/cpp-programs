#include<iostream>
using namespace std;
/*
0
12
345
6789
*/
int main()
{
short int i,j,n,c;
cout << "Enter number of rows:";
cin >> n;
cout <<"\n";
c=0;
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
cout <<c;
c++;

}
cout <<"\n";
}
}
#include <iostream>
using namespace std;
void binary(int arr[],int);
int main()
{
short int i,x,temp,j;
int array[6];
cout <<"Enter 6 elements:\n";
for(i=0;i<6;i++)
{
cout <<"Enter value for position:"<<i+1<<"\n";
cin >> array[i];
}
//original array
for(i=0;i<6;i++)
{
cout <<array[i]<<"\t";
}
//original array end
cout <<"\n";
//sorted array code
for(i=0;i<6;i++)
{
for(j=0;j<(6-i-1);j++)
{
 if(array[j]>array[j+1])
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
//sorted array display
for(i=0;i<6;i++)
{
cout <<array[i]<<"\t";
}
cout <<"\n";
cout << "Enter no to search:"<<"\n";
cin >> x;
binary(array,x);
return 0;
}
//binary function
void binary(int arr[],int x)
{
int ub=5;
int lb=0;
int midpoint=-1;
repeat:midpoint=lb+(ub-lb)/2;
if(x>arr[midpoint])
{
lb=midpoint+1;
goto repeat;
}
else if(x<arr[midpoint])
{
ub=midpoint-1;
goto repeat;
}
else
{
cout << "value found at position:"<<midpoint;
}
}

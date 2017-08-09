#include "iostream"
using namespace std;
int main()
{
int arr[10],i,j,n;
cout<<"Enter no of elements:";
cin >> n;
for(i=0;i<n;i++)
{
cout << "enter element for position"<<i<<":";
cin >>arr[i];
cout <<"\n";
}
cout << "Sorted arrays are:\n";
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
 int temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}
}
cout <<"\n";
for(i=0;i<n;i++)
{
cout <<arr[i];
cout << "\t";
}
return 0;
}
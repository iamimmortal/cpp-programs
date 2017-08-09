#include<iostream>
using namespace std;
int main()
{
int arr[5],i;
cout <<"Enter elements of array:";
cout <<"\n";
for(i=0;i<5;i++)
{
cin>>arr[i];
}
//reversing and array
for(i=(sizeof(arr)/sizeof(arr[0])-1);i>=0;i--)
{
cout <<arr[i];
}
}
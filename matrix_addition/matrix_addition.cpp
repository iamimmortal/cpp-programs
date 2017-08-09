#include<iostream>
#define ROWS 2
#define COLS 2
using namespace std;
int main()
{
int mat1[ROWS][COLS],mat2[ROWS][COLS];
int i,j;
cout << "Enter 9 elements in array\n";
cout <<"\nFor matrix 1\n";
for(i=0;i<ROWS;i++)
{
for(j=0;j<COLS;j++)
{
cout << "Enter value for position:"<<i<<j<<"\n";
cin >> mat1[i][j];
}
}
cout <<"For matrix 2\n";
for(i=0;i<ROWS;i++)
{
for(j=0;j<COLS;j++)
{
cout << "Enter value for position:"<<i<<j<<"\n";
cin >> mat2[i][j];

}
}
cout <<"\nMatrix Addition\n";
for(i=0;i<ROWS;i++)
{
for(j=0;j<COLS;j++)
{
cout << mat1[i][j]*mat2[i][j]<<"\t";
}
cout << "\n";
}
}
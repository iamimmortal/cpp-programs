#include "iostream"
#include <math.h>
using namespace std;
int quadratic(int*,int*,int*);
int main()
{
int a,b,c;
cout <<"Enter value of a:";
cin>>a;
cout<<"\n";
cout <<"Enter value of b:";
cin>>b;
cout<<"\n";
cout <<"Enter value of c:";
cin>>c;
cout<<"\n";
quadratic(&a,&b,&c);
}

//quadratic function
int quadratic(int *a,int *b,int *c)
{
int determinant;
determinant=((*b * *b)-(4* *a * *c));
//if determinant is >0
if(determinant>0)
{
cout<<"The roots of equation real or unequal:";
cout<<"\n";
cout<<"Root1:"<<(-*b+sqrt(determinant))/(2* *a);
cout<<"\n";
cout<<"Root2:"<<(-*b-sqrt(determinant))/(2* *a);
}
//if determinant is<0
else if(determinant<0)
{
cout <<"Quadratic eqution is complex and imaginary";
cout<<"\n";
cout<<"Root1:"<<(-*b/2 * *a)<<"+" <<"i" <<sqrt(-determinant)/(2 * *a);
cout <<"\n";
cout<<"Root2:"<<(-*b/2 * *a)<<"-" <<"i" <<sqrt(-determinant)/(2 * *a);
}
else
{
cout <<"Quadratic equation is real or equal";
cout<<"\n";
cout<<"Root1=Root2:"<<(-*b)/(2 * *a);
}
}
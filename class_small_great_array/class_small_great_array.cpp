#include<iostream>
using namespace std;
class SmallGreat{
public:
int *array;
int small_great(int *array);
int  display(int *array);
};
//method
int SmallGreat::small_great(int *array)
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5-i-1;j++)
{
if(array[j]>array[j+1])
{
int temp=array[j+1];
array[j+1]=array[j];
array[j]=temp;
}

}

}
}
//display
int SmallGreat::display(int *array)
{
cout <<"The sorted array is:"<<"\n";
for(int i=0;i<5;i++)
{
cout <<array[i];
}
cout <<"\n";
cout <<"The smallest element of array is:"<<array[0];
cout <<"\n";
cout <<"The greatest element of array is:"<<array[4];
}

//main
int main()
{
int array[10];
int i;
cout <<"Enter 5 elements";
cout <<"\n";
for(i=0;i<5;i++)
{
cout <<"Enter element for position:"<<(i+1)<<"\n";
cin>>array[i];
}
SmallGreat sg;
sg.small_great(array);
sg.display(array);
}
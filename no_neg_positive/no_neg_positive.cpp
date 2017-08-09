#include "iostream"
int main()
{
int n;
std::cout << "Enter a number:";
std::cin >> n;
std::cout<<"\n";
if(n>0)
{
std::cout << "The number is positive";
}

else if(n==0)
{
std::cout <<"Number is niether negative nor positive";
}
else
{
std::cout <<"Number is negative";
}
return 0;
}
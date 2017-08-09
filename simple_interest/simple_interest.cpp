#include "iostream"
using namespace std;
int main()
{
 float rate=7.5;
int year;
int principle;
cout << "\nEnter principle amount:";
cin >> principle;
cout << "\nEnter number of year:";
cin >> year;
cout <<"simple interest is:"<<(principle*rate*year)/100;
}
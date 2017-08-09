#include "iostream"
using namespace std;
int change;
class VendingMachine
{
public:
int Thousand();
int FiveHundred();
int Hundred();
int Fifty();
int Twenty();
int Ten();
int Five();
int Two();
int One();
int VM();
void pass(int*);
};
/*function definition*/
int VendingMachine::Thousand()
{
return 1000;
}
int VendingMachine::FiveHundred()
{
return 500;
}
int VendingMachine::Hundred()
{
return 100;
}
int VendingMachine::Fifty()
{
return 50;
}
int VendingMachine::Twenty()
{
return 20;
}
int VendingMachine::Ten()
{
return 10;
}
int VendingMachine::Five()
{
return 5;
}
int VendingMachine::Two()
{
return 2;
}
int VendingMachine::One()
{
return 1;
}
/*Following function is assingning value to class private member*/
void VendingMachine::pass(int *x)
{
change=*x;
}
/*vendingmachine(VM) function definition*/
int VendingMachine::VM()
{
int counter=0;
cout<<"List of notes dispense are:"<<"\n";
while(change>0)
{
if(change>=1000)
{
change=change-(Thousand());
cout <<"1000"<<"\n";
counter++;
}
else if(change>=500&&change<1000)
{
change=change-(FiveHundred());
cout <<"500" <<"\n";
counter++;
}
else if(change<500&&change>=100)
{
change=change-(Hundred());
cout <<"100"<<"\n";
counter++;
}
else if(change<100&&change>=50)
{
change=change-(Fifty());
cout <<"50"<<"\n";
counter++;
}
else if(change<50&&change>=20)
{
change=change-(Twenty());
cout <<"20"<<"\n";
counter++;
}
else if(change<20&&change>=10)
{
change=change-(Ten());
cout <<"10"<<"\n";
counter++;
}
else if(change<10&&change>=5)
{
change=change-(Five());
cout <<"5"<<"\n";
counter++;
}
else if(change<5&&change>=2)
{
change=change-(Two());
cout <<"2"<<"\n";
counter++;
}
else
{
change=change-(One());
cout <<"1"<<"\n";
counter++;
}
}
cout <<"Number of notes dispense is:";
cout<< counter;
}
//main method
int main()
{
VendingMachine vm;
int x;
cout <<"Enter change amount:";
cin >>x;
/*passing data to fun for accessing private member*/
vm.pass(&x);
vm.VM();
return 0;
}
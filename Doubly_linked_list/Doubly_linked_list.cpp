#include "iostream"
using namespace std;
//struct node declaration
typedef struct node
{
int data;
node *next;
node *prev;
}node;
//global declarations
int c=0;
node *root=NULL;
//class definition
class Doubly
{
//function declaration
public:
void creation();
int insert_nth_position(int*);
int delete_nth_position(int*);
int midpoint();
void find_duplicate_delete();
void middle();
void display();
int traverseCount();
//function declaration for new node
node* GetNewNode(int*);
};
//integer declaration for count traverse element
int main()
{
clrscr();
Doubly d;
int choice;
repeat:cout <<"Doubly linked list"<<"\n";
cout <<"1.creation"<<"\n";
cout <<"2.insertion_nth_position"<<"\n";
cout <<"3.deletion_nth_position"<<"\n";
cout <<"4.middle_element_data"<<"\n";
cout <<"5.find_duplicate_delete"<<"\n";
cout <<"6.Display"<<"\n";
ask:cout <<"Enter your choice:";
cin>>choice;
//switch case
switch(choice)
{
case 1:
{
d.creation();
goto ask;
break;
}
case 2:
{
int x;
cout <<"\n";
cout <<"Enter position to insert:";
cin>>x;
d.insert_nth_position(&x);
goto ask;
break;
}
case 3:
{
int s;
cout<<"\n";
cout <<"Enter position:";
cin >>s;
d.delete_nth_position(&s);
goto ask;
break;
}
case 4:
{
d.middle();
goto ask;
break;
}

case 5:{
d.find_duplicate_delete();
cout <<"\n";
goto ask;
break;
}
case 6:
{
d.display();
cout <<"\n";
goto ask;
break;
}
default:
{
cout <<"Invalid input"<<"\n";
goto repeat;
}
}
}
/***************************************
function definition for new node creation
             BELOW
 ****************************************/
node* Doubly::GetNewNode(int *x)
{
node *temp=new node();
temp->data=*x;
temp->next=NULL;
temp->prev=NULL;
return temp;
}
/***************************************
  traversing and count element function 
               BELOW *****************************************/
int Doubly::traverseCount()
{
node *temp1;
c=0;
temp1=root;
if(temp1->next==NULL)
{
return 1;
}
else
{
while(temp1!=NULL)
{
temp1=temp1->next;
c++;
}

return 0;
}
}
/***************************************
      New node creation function 
               BELOW *****************************************/
void Doubly::creation()
{
node *temp1,*support;
int newnodeval;
cout <<"Enter a value:";
cin>>newnodeval;
temp1=GetNewNode(&newnodeval);
if(root==NULL)
{
root=temp1;
}
else
{
support=root;
//while loop is for traversing
while(support->next!=NULL)
{
support=support->next;
}
support->next=temp1;
temp1->prev=support;
}
}
/***************************************
  Inserting a new node at nth position 
               BELOW *****************************************/
int Doubly::insert_nth_position(int *x)
{
node *temp1,*temp2,*temp3;
int i,newnodeval;
traverseCount();
temp1=root;
cout <<"Enter a value:";
cin>>newnodeval;
temp2=GetNewNode(&newnodeval);
if(*x==1)
{
temp1->prev=temp2;
temp2->next=temp1;
root=temp2;
}
else if(c<*x+1&&c!=*x+2)
{
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=temp2;
temp2->prev=temp1;
}
else
{
for(i=0;i<*x-2;i++)
{
temp1=temp1->next;
}
temp3=temp1->next;
temp3->prev=temp2;
temp2->next=temp3;
temp1->next=temp2;
temp2->prev=temp1;
}

}
/***************************************
  Deleting element at nth position 
               BELOW *****************************************/
int Doubly::delete_nth_position(int *s)
{
node *temp1,*temp2,*temp3;
traverseCount();

int i;
temp1=root;
if(temp1->next==NULL)
{
root=NULL;
delete(temp1);
}
else if(*s==1)
{
temp2=temp1->next;
temp1->next=NULL;
temp2->prev=NULL;
root=temp2;
delete(temp1);
}
else if(c==*s)
{
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp2=temp1->prev;
temp2->next=NULL;
temp1->prev=NULL;
delete(temp1);
}
else
{
for(i=0;i<*s-2;i++)
{
temp1=temp1->next;
}
temp2=temp1->next;
temp3=temp2->next;
temp3->prev=temp1;
temp1->next=temp3;
temp2->next=NULL;
temp2->prev=NULL;
delete(temp2);
}
}
/***************************************
  function for finding duplicate element 
               BELOW *****************************************/
void Doubly::find_duplicate_delete()
{
node *temp1,*temp2,*temp3;
temp1=root;
while(temp1!=NULL&&temp1->next!=NULL)
{
temp2=temp1;
//comparing picked element with other
while(temp2->next!=NULL)
{
if(temp1->data==temp2->next->data)
{
cout <<temp2->next->data<<"\t is repeated";
temp3=temp2->next;
temp3->prev=NULL;
temp2->next=NULL;
temp3->next=NULL;
delete(temp3);
}
else
temp2=temp2->next;
}
temp1=temp1->next;
}
}
/***************************************
  function for finding middle element
               BELOW *****************************************/
void Doubly::middle()
{
node *temp1;
temp1=root;
int i;
for(i=0;i<midpoint();i++)
{
temp1=temp1->next;
}
cout <<"\n"<<"Midpoint element is:"<<temp1->data;
cout<<"\n";
}
/***************************************
      function for displaying node
               BELOW *****************************************/
void Doubly::display()
{
node *temp1;
temp1=root;
while(temp1!=NULL)
{
cout <<temp1->data<<"\t";
temp1=temp1->next;

}
}

/***************************************
function for finding midpoin to help to         find middle element
               BELOW *****************************************/
int Doubly::midpoint()
{
Doubly d;
d.traverseCount();
int z;
z=c/2;
if(c%2==1)
{
return z;
}
else
{
return z-1;
}
}
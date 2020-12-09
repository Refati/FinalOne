#include<iostream>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct node
{
 int t_no;
 char p_name[50];
 node *link;
};

node *temp=NULL;
node *front=NULL;
node *rear=NULL;

void insert()
{
 //clrscr();
 temp=new node;
 cout<<"\n Enter ticket no.: ";
 cin>>temp->t_no;
 cout<<" Enter passenger name: ";
 cin>>temp->p_name;
 temp->link=NULL;
 if(front==NULL)
 {
  front=temp;
  rear=temp;
 }
 else
 {
  rear->link=temp;
  rear=temp;
 }
 cout<<"\n Insert Successful!";
 cout<<"\n Press any key to continue...";
 
}
void display()
{
// clrscr();
 if(front==NULL)
 cout<<"\n The queue is empty!";
 else

 {
  temp=front;
  while(temp!=NULL)
  {
   cout<<"\n Ticket no.: "<<temp->t_no;
   cout<<"\n Passenger name: ";
   puts(temp->p_name);
   temp=temp->link;
  }
 }
 cout<<"\n Press any key to continue...";
 
}
void delete_node()
{
// clrscr();
 if(front==NULL)
 cout<<"\n The queue is empty!";
 else
 {
  temp=front;
  front=front->link;
  cout<<"\n Deleted the following record: ";
  cout<<"\n Ticket no.: "<<temp->t_no;
  cout<<"\n Passenger name: ";
  puts(temp->p_name);
  delete temp;
 }
 cout<<"\n Press any key to continue...";
 
}
int main()
{
 //clrscr();
 int choice;
 while(1)
 {
//  clrscr();
  cout<<"\n\t <----------------- Main Menu ----------------->\n\t1.Insert\n\t2.Display\n\t3.Delete\n\t4.Exit";
  cout<<"\n Enter your choice: ";
  cin>>choice;
  switch(choice)
  {
   case 1:
    insert();
    break;

   case 2:
    display();
    break;

   case 3:
    delete_node();
    break;

   case 4:
    exit(0);
  }
 }
}
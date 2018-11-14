# include <iostream>
using namespace std;

int display_menu();

struct Node
{
 int no;
 struct Node *next;
 struct Node *prev;
};

class DLL
{
 Node *temp,*start;
 public:
    DLL()
    {
     start=NULL;
    }
    void insert_first();
    void insert_last();
    void delete_first();
    void delete_last();
    void display();
};

void DLL :: insert_first()
{
  Node *newnode;
  newnode = new Node;
  cout<<"Enter Number :";
  cin>>newnode->no;
  temp=start;

  if(temp==NULL)
  {
   start=newnode;
   newnode->next=NULL;
   newnode->prev=NULL;
   return;
  }

  newnode->next=temp;
  newnode->prev=NULL;
  temp->prev=newnode;
  start=newnode;
}

void DLL :: insert_last()
{
 Node *newnode;
 newnode= new Node;
 cout<<"Enter Number :";
 cin>>newnode->no;
 temp=start;

 if(temp==NULL)
 {
  start=newnode;
  newnode->next=NULL;
  newnode->prev=NULL;
  return;
 }

 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=newnode;
 newnode->prev=temp;
 newnode->next=NULL;
}

void DLL :: display()
{
 cout<<endl;
 Node *tail;
 temp=start;

 if(start==NULL)
 {
  cout<<"Empty  !!!";
  return;
 }
 cout<<endl;
 while(temp!=NULL)
 {
  cout<<temp->no<<"\t";
  if(temp->next==NULL)
  {
    tail=temp;
  }
    temp=temp->next;
 }
 temp=tail;
 cout<<endl;
}

void DLL :: delete_first()
{
  temp=start;
  temp->next->prev=NULL;
  start=temp->next;
}

void DLL :: delete_last()
{
  temp=start;
  while(temp->next->next!=NULL)
  {
   temp=temp->next;
  }
  temp->next=NULL;
}


int main()
{
 DLL dl;
 while(1)
 {
  switch(display_menu())
  {
   case 1 : dl.insert_first();
       
        break;
   case 2 : dl.insert_last();
      
        break;
   case 3 : dl.delete_first();
       
        break;
   case 4 : dl.delete_last();
       
        break;
   case 5 : dl.display();
       
        break;
  
  }
 }
}

int display_menu()
{
 int ch;
 cout<<"1. Insert at First"<<endl;
 cout<<"2. Insert at Last"<<endl;
 cout<<"3. Delete From First"<<endl;
 cout<<"4. Delete From Last"<<endl;
 cout<<"5. Display"<<endl;
 cout<<"6. Exit"<<endl;
 cout<<"Enter your choice :";
 cin>>ch;
 return(ch);

}

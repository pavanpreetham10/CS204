#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 
class node 
{ 
 public: 
 int x,y; 
 node *next; 
}; 


int addstart(int a,int b,node** head)
{
 node* new_node = new node();
 node* temp;
 new_node->x=a;
 new_node->y=b;
 temp=*head;
 new_node->next=temp;
 *head=new_node;
 return 0;
}


void delfirst(node** head)
{
 node* temp;
 if(*head==NULL)
	cout<<"-1"<<'\n';
	return -1;
 else
{
		
 	temp=*head;
	*head=temp->next;
	free(temp);

}

}


 void del(int x,int y,node** head)
{
  node* str=*head;
  if(*head==NULL)
{ 
  cout<<-1; 
  return;
}
  if(str->x==x && str->y==y) 
{ 
  delfirst(head);
  return;
}
   node *temp=str;
   node *prev=NULL;
   int flag=0;
  while(temp->next!=NULL)
{
  prev=temp;
  temp=temp->next;
    if(temp->x==x && temp->y==y) 
{
    prev->next=temp->next;
    free(temp);
    flag=1;
    cout<<0<<"\n"; break;   
}
}
   if(flag==0) cout<<-1;
   
 }


void Search(node** head,float d)
{
 int a,b;
 node* temp;
 temp=*head;
  while(temp!=NULL)
{
  a=temp->x;
  b=temp->y;
  if((a*a+b*b)<=(d*d))
{
   cout<<"("<<a<<","<<b<<")"<<'\n';
}
  temp=temp->next;
}

}


bool search(int a,int b,node** head)
{
 int c,d;
 node* temp;
 temp=*head;
  while(temp!=NULL)
{
  c=temp->x;
  d=temp->y;
   if(c==a && d==b)
{
   cout<<"true"<<'\n';
   return true;
}
 temp=temp->next;	

}
  if(temp==NULL){cout<<"false"<<'\n'; return false;}

}


int length(node** head)
{
 int i=0;
 node* temp;
 temp=*head;
 while(temp!=NULL)
{
 i++;
 temp=temp->next;
}
        cout<<i<<'\n';
	return i;
}


int main()
{
int i,t,a,b,f;	
float d;
cin >>t;
node** s;
*s=NULL;
for(i=0;i<t;i++)
{
	cin>> f;
	switch(f)
	{
		case 1:	
			cin >>a;
			cin >>b;
			addstart(a,b,s);
			
		break;
		case 2:						
			delfirst(s);
			
		break;
		case 3:
			cin >>a;
			cin >>b;
			del(a,b,s);
			
		break;
		case 4:
			cin>>d;
			Search(s,d);
			
		break;
		case 5:
			cin >>a;
			cin >>b;
			search(a,b,s);
			
		break;
		case 6:
			length(s);
			
		break;
		default: cout<< "invalid";
	}
}
return 0;
}

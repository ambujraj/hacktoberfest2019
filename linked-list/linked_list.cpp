#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
};
class linked{
  public:
  Node *Head,*ch;
  linked(){
    Head=NULL;
  }
  void push(int da){
    Node* new_node=new Node();
    new_node->data=da;
    new_node->next=Head;
    Head=new_node;
  }
  void append(int da){
    Node *tem=Head;
    Node* new_node=new Node();
    new_node->data=da;
    new_node->next=NULL;
    while(tem->next!=NULL){
      tem=tem->next;
    }
    tem->next=new_node;
  }
  void insert(int key,int da){
    Node *tem=Head;
    Node* new_node=new Node();
    new_node->data=da;
    while(tem->next!=NULL && tem->data!=key){
      tem=tem->next;
    }
    new_node->next=tem->next;
    tem->next=new_node;
  }
  void display(){
    Node *tem=Head;
    while(tem!=NULL){
      cout<<tem->data<<" ";
      tem=tem->next;
    }
    cout<<endl;
  }
  void delete_ele(int da){
    Node *tem=Head,*t2;
    if(tem->data==da){
      Head=tem->next;
      free(tem);
    }
    else{
      t2=tem->next;
      while(t2!=NULL){
        if(t2->data==da){
          tem->next=t2->next;
          free(t2);
          break;
        }
        tem=tem->next;
        t2=tem->next;
      }
    }
  }
  void reversal(){
    Node* b=Head;
    Node *a=NULL,*c=NULL;
    while(b!=NULL){
      c=b->next;
      b->next=a;
      a=b;
      b=c;
    }
    Head=a;
  }
  int pa_check(Node *tem,int con){
    if(tem==NULL)
      return 1;
    con=pa_check(tem->next,con);
    if(con==0)
      return 0;
    cout<<"com "<<tem->data<<" "<<ch->data<<endl;
    if(tem->data!=ch->data){
      con=0;
    }
    ch=ch->next;
    return con;
  }
  void palindrome(){
    Node *tem=Head;
    ch=Head;
    int con=pa_check(tem,1);
    if(con==1)
      cout<<"Palindrome"<<endl;
    else 
      cout<<"NOT Palindrome"<<endl;
  }
  void duplicate(){
    Node *new_node=new Node();
    new_node->next=Head;
    Node* b=Head;
    Head=new_node;
    Node *a=Head,*c=NULL;
    while(b->next!=NULL){
      c=b->next;
      if(b->data==c->data){
        a->next=b->next;
        free(b);
      }
      else 
        a=b;      
      b=c;
    }
    Head=Head->next;
  }
};
int main(){
  linked list;
  list.push(1);
  list.push(1);
  list.push(2);
  list.push(6);
  list.push(6);
  list.push(6);
  list.push(6);
  list.push(7);
  list.push(7);
  list.display();
  list.duplicate();
  list.display();
  return 0;
}
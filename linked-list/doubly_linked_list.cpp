#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node *next,*pre;
};
class double_linked{
  public:
  Node *Head;
  double_linked(){
    Head=NULL;
  }
  void push(int da){
    Node* new_node=new Node();
    new_node->data=da;
    new_node->next=Head;
    if(Head!=NULL)
      Head->pre=new_node;
    new_node->pre=NULL;
    Head=new_node;
  }
  void append(int da){
    Node* new_node=new Node();
    new_node->data=da;
    new_node->next=NULL;
    Node *tem=Head;
    while(tem->next!=NULL){
      tem=tem->next;
    }
    tem->next=new_node;
    new_node->pre=tem;
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
    new_node->next->pre=new_node;
    new_node->pre=tem;
  }
  void delete_ele(int da){
    Node *tem=Head,*t2;
    if(tem->data==da){
      Head=tem->next;
      Head->pre=NULL;
      free(tem);
    }
    else{
      t2=tem->next;
      while(t2!=NULL){
        if(t2->data==da){
          tem->next=t2->next;
          if(tem->next)
            tem->next->pre=tem;
          free(t2);
          break;
        }
        tem=tem->next;
        t2=tem->next;
      }
    }
  }
  void display(){
    Node *tem=Head;
    while(tem!=NULL){
      cout<<tem->data<<" ";
      tem=tem->next;
    }
    cout<<endl;
  }
  void reversal(){
    Node *tem=Head,*t2=NULL;
    while(tem!=NULL){
      t2=tem->pre;
      tem->pre=tem->next;
      tem->next=t2;
      tem=tem->pre;
    }
    if(t2 != NULL )  
        Head = t2->pre;
  }
};
int main(){
  double_linked list;
  list.push(4);
  list.push(6);
  list.push(7);
  list.display();
  list.reversal();
  list.display();
  return 0;
}
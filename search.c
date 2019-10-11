// Iterative C program to search an element in linked list 
#include<stdio.h> 
#include<stdlib.h> 
#include<stdbool.h> 
  
/* Link list node */
struct Node 
{ 
    int key; 
    struct Node* next; 
}; 
  
/* Given a reference (pointer to pointer) to the head 
  of a list and an int, push a new node on the front 
  of the list. */
void push(struct Node** head_ref, int new_key) 
{ 
    /* allocate node */
    struct Node* new_node = 
            (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the key  */
    new_node->key  = new_key; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
  
/* Checks whether the value x is present in linked list */
bool search(struct Node* head, int x) 
{ 
    struct Node* current = head;  // Initialize current 
    while (current != NULL) 
    { 
        if (current->key == x) 
            return true; 
        current = current->next; 
    } 
    return false; 
} 
  
/* Driver program to test count function*/
int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
    scanf("%d", &x);
    /* Use push() to construct below list 
     14->21->11->30->10  */
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; ++i)
        {   int temp;
            scanf("%d", &temp);
            push(&head,temp);
        }
  
    search(head, x)? printf("Yes") : printf("No"); 
    return 0; 
} 
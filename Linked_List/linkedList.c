#include <stdio.h>

typedef struct node{
    int value;
    int index;
    node_t* next;
}node_t;
// print list elements
void printList(node_t* head){
    node_t* current = head;
    while(current->next !=NULL){
        printf("%d\n",current->val);
        current = current->next;
    }

}
// push to the end of the list
void push(int val, node_t* head){
    node_t* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = (node_t*) malloc(sizeof(node_t));
    current->next->value  = value;
    current->next->index += 1;
    current->next->next = NULL;
}
// push an item to the beginning of the list
void AddFirst(int val, node_t** head){
    node_t* newnode = (node_t*)malloc(sizeof(node_t));
    node_t* current = *head;
    while(current->next != NULL){
        current->index += 1;
        current = current->next;
    }
    new_node->value = val;
    new_node->index = 1;
    new_node->next = head;
    *head = new_node;
}
// removing the first item from the lists
int pop(node_t** head){
   int retval = -1;
   node_t* next_node = NULL;
    // empty list
   if(*head == NULL){
       return -1;
   }

   next_node = *head;
   retval = (*head)->value;
   free(*head);
   *head = new_node;
   return retval;
}
// removing the last item from a list
int removeLast(node_t* head){
    int retval =0;
    if(head->next == NULL){
        retval = head->value;
        free(head);
        return retval;
    }

    node_t* current = head;
    while(current->next != NULL){
        current = current->next;
    }

    retval = current->next->value;
    free(current->next);
    current->next = NULL;
    return retval;

}
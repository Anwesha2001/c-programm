//single linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *insert(int data){
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    if(!newnode){
        printf("deallocation\n");
        exit(1);
    }
      newnode -> data=data;
      newnode -> next = NULL;
      return newnode;
}
     void print(struct node *head){
        struct node * temp=head;
        while(temp !=NULL){
            printf("%d ->",temp -> data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
int main(){
    struct node *head=NULL;
    struct node *tail = NULL;
    int choice,value;
    printf("Enter Linked list\n");
    do{
        printf("Enter value\n");
        scanf("%d",&value);
        struct node *newnode=insert(value);
        if(head == NULL){
            head=newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail=newnode;
        }
        printf("Enter choice for create new node ( 1 is yes),(0 is for no)\n");
        scanf("%d",&choice);
        }while(choice == 1);
        print(head);
        return 0;
        }
    

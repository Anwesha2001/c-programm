//linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
struct Node* createNode(int data){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=NULL;
return newNode;
}
struct Node* createCircularLinkedList(int n){
struct Node* head=NULL;
struct Node* tail=NULL;
for(int i=0;i<n;i++){
struct Node* newNode=createNode(i+1);
printf("Enter data for node %d:",i+1);
scanf("%d",&newNode->data);
if (head==NULL)
head=tail=newNode;

else{
tail->next=newNode;
tail=newNode;
}
}
tail->next=head;
return head;
}
void displayCircularLinkedList(struct Node* head){
struct Node* current=head;
if(head==NULL){
printf("List is empty.\n");
return;
}
do{
printf("%d ",current->data);
current=current->next;
}while(current!=head);
printf("\n");
}
void insertAtBeginning(struct Node** head,int data){
struct Node* newNode=createNode(data);
if(*head==NULL){
*head=newNode;
newNode->next=newNode;
}
else{
newNode->next=*head;
struct Node* last=*head;
while(last->next!=*head)
last=last->next;
last->next=newNode;
*head=newNode;
}
}
void insertAtEnd(struct Node** head,int data){
struct Node* newNode=createNode(data);
if(*head==NULL){
*head=newNode;
newNode->next=newNode;
}
else{
struct Node* last=*head;
while(last->next!=*head)
last=last->next;
last->next=newNode;
newNode->next=*head;
}
}
void deleteFromBeginning(struct Node** head){
if(*head==NULL)
return;
if(*head==(*head)->next){
free(*head);
*head=NULL;

return;
}
struct Node* last=*head;
while(last->next!=*head)
last=last->next;
*head=(*head)->next;
last->next=*head;
free(last->next);
}
void deleteFromEnd(struct Node** head){
if(*head==NULL)
return;
if(*head==(*head)->next){
free(*head);
*head=NULL;
return;
}
struct Node* current=*head;
while(current->next->next!=*head)
current=current->next;
free(current->next);
current->next=*head;
}
void deleteAfter(struct Node* head,int key){
if (head==NULL)
return;
struct Node* curr=head;
while(curr->next!=head && curr->next->data!=key)
curr = curr->next;
if(curr->next==head){
printf("Node with key %d not found.\n",key);
return;
}
struct Node* temp=curr->next;
curr->next=temp->next;
free(temp);
}
void deleteList(struct Node** head){
if(*head==NULL)
return;
struct Node* current=*head;
while(current->next!=*head){
struct Node* temp=current;
current=current->next;
free(temp);
}
free(current);
*head=NULL;
}
int main(){
struct Node* head=NULL;
int n,ch,data,key;
while(1){
printf("\nMenu:\n");

printf("1. Create a circular linked list\n");
printf("2. Display the circular linked list\n");
printf("3. Insert a node at the beginning\n");
printf("4. Insert a node at the end\n");
printf("5. Delete a node from the beginning\n");
printf("6. Delete a node from the end\n");
printf("7. Delete a node after a given node\n");
printf("8. Delete the entire circular linked list\n");
printf("9. Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch){
case 1:
printf("\nEnter the number of nodes:");
scanf("%d",&n);
head=createCircularLinkedList(n);
printf("\n");
break;
case 2:
displayCircularLinkedList(head);
printf("\n");
break;
case 3:
printf("\nEnter data to insert at the beginning:");
scanf("%d",&data);
insertAtBeginning(&head,data);
printf("\n");
break;
case 4:
printf("\nEnter data to insert at the end:");
scanf("%d",&data);
insertAtEnd(&head, data);
printf("\n");
break;
case 5:
deleteFromBeginning(&head);
printf("\n");
break;
case 6:
deleteFromEnd(&head);
printf("\n");
break;
case 7:
printf("\nEnter the key node after which to delete:");
scanf("%d",&key);
deleteAfter(head,key);
printf("\n");
break;
case 8:
deleteList(&head);
printf("\nCircular linked list deleted.\n");
printf("\n");
break;
case 9:
exit(0);
default:
printf("Invalid choice.\n");
printf("\n");

}
}
return 0;
}

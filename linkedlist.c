#include <stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* next;
};
struct node * head=0;
struct node *newnode;

void create(){
    struct node  * temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    printf("Enter the value of the node");
    scanf("%d",&newnode->data);
    if(head==0){
        head=newnode;
    }
    else{
        
        
        temp->next=newnode;
        temp=newnode;
        
    }
}
void insertAtStarting(){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    printf("ENter the data of the node: ");
    scanf("%d",&newnode->data);
    if(head==0){
        head=newnode;
        
    }
    else{
        newnode->next=head;
        head= newnode;
    }
}
void insertAtEnding(){
    newnode=(struct node*)malloc(sizeof(struct node));
    struct node * temp;
    printf("Enter data value of the node");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next != 0){
            temp=temp->next;
        }
    temp->next=newnode;
    }
    
}
void insertAtPerticularPosition(){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    struct node * temp;
    int pos;
    int i=1;
    printf("Enter inserting position do you want");
    scanf("%d",&pos); 
    printf("Enter data of the node");
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}
void deleteAtStarting(){
    struct node * temp;
    if(head==0){
        printf("there is no nodes");
    }
    else
    {
    temp=head;
    head=head->next;
    printf("The deleted item is %d",temp->data);
    free(temp);
    }    
}
void deleteAtEnding(){
    struct node * cur1;
    if(head==0)
    {
         printf("there is no nodes");
        
    }
    else if(head->next==0){
        cur1=head;
        printf("deleted item is %d",cur1->data);
        free(cur1);
        
    }
    else
    {
        struct node* temp,*cur;
        temp=head;
        while(temp->next!=0){
            cur=temp->next;
            temp=temp->next;
        }
        cur->next=0;
        printf("Deleted info is %d",temp->data);
        free(temp);
    }
    
}
void deleteAtPerticularPosition(){
    struct node* temp;
    int i=1;
    int pos;
    printf("Enter position to deleted");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    free(temp);
}
void display(){
    struct node * temp;
    temp=head;
    if(head==0){
        printf("Linked list is empty");
    }
    else{
    printf("The elements presented are: ");
    printf("%d",temp->data);
    while(temp->next!=0){
        temp=temp->next;
       
         printf("%d ",temp->data);
        
    }

    }  
    
}
void main(){
    int ch;

 while(1){
     
     printf("\n 0.create \n1.InsertAtBeggining\n 2.InsertAtEnding \n3.InsertAtPerticularPosition\n 4.DeleteAtStarting\n 5.DeleteAtEnding \n6.DeleteAtPerticularPosition \n7.display\n8.exit");
     scanf("%d",&ch);
     switch(ch){
         case 0:
            create();
            break;
         case 1:
            insertAtStarting();
            break;
        case 2:
             insertAtEnding();
            break;
        case 3:
            insertAtPerticularPosition();
            break;
        case 4:
            deleteAtStarting();
            break;
        case 5:
            deleteAtEnding();
            break;
        case 6:
            deleteAtPerticularPosition();
            break;
        case 7:
            display();
            break;
        case 9:
            exit(0);
            break;
            
        default:
            printf("Invalid choice");
            break;
        
         
     }
     
 }
    
}



    

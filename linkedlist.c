#include<stdio.h>
#include<stdlib.h>
int i,a[50],n;
int top=-1;
void push(){
    int data;
    if(top==n-1){
        printf("Stack is full");
    }
    else{
        printf("Enter elements into the stack");
        scanf("%d",&data);
        top=top+1;
        a[top]=data;
    }
}
void pop(){
    int ele;
    if(top==-1){
        printf("Stack is empty");
    }
    else{
    ele=a[top];
    top=top-1;
    printf("deleted element is %d",ele);
}
}
void peek(){
    printf("%d",a[top]);
}
void display(){
    int j;
    if(top==-1){
        printf("stack is empty");
    }
    else
    {
    printf("elements of the stack are");
    for(j=0;j<=top;j++){
        printf("%d ",a[j]);
    }
    }
}


void main()
{
    int ch;
    printf("Enter size of the stack");
    scanf("%d",&n);
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Enter valid choice");
                break;
        }
    }
    
}

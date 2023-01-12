#include <stdio.h>
#include<stdlib.h>
#define n 5

int top =-1;
int a[n];
  
  
int push(int data)
{

 if(top == n - 1)
 {
     printf("overflow");
     
 }
 else  
 {
     top++;
     a[top] = data;
     printf("the elemet pushed to stack is %d \n",a[top]);
 }
}

int pop(int data)
{
    if(top==-1)
    printf("underflow");
    
    else
    {
        printf("the popped data from stack is %d \n",a[top]);
        top--;
        
    }
}

//reading the top element
int readtop()
{
    printf("the top element is %d \n",a[top]);
    
}
//is empty
int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

//print the elements in the stack
int printall()
{
    printf("the elements are");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    
    push(9);
    push(3);
    push(4);
    push(7);
    push(6);
    pop(6);
    printall();
    
    
    readtop();
    
    return 0;
}
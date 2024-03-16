#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size],top=-1;
void push();
void pop();
void display();
void main()
{
int act;
do{
printf("Select an action to continue\n");
printf("1.push\t2.pop\t3.display\t4.exit\n");
scanf("%d",&act);
switch(act)
{
case 1:
{
printf("you have chosen push operation\n");
push();
break;
}
case 2:
{
printf("you have chosen pop operation\n");
pop();
break;
}
case 3:
{
printf("you have chosen display operation\n");
display();
break;
}
case 4:
{
exit(0);
}
default:
{
printf("wrong choice!!\n");
printf("try again\n");
break;
}
}
}
while(act!=4);

}
void push()
{
int item;
printf("enter item to be pushed into the stack\n");
scanf("%d",&item);
if(top==size-1)
printf("error.stack overflow\n");
else
{
top++;
stack[top]=item;
printf("%d pushed succesfully\n",item);
}
}
void pop()
{
int item;
if(top==-1)
printf("error.stack underflow\n");
else
{
item=stack[top];
printf("%d is deleted succesfully\n",item);
top--;
}
}
void display()
{
int i;
if(top==-1)
printf("no elements in stack\n");
else
{
printf("stack elements are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}

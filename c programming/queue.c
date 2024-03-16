#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int back=0;
int front=0;
int enqueue(int data);
int dequeue();
void print();
int main()
{
int ch,data;
while(1)
{
printf("\n1.Enqueue\n2.Dequeue\n3.print\n0.quit\n");
printf("give your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter number to enqueue:");
scanf("%d",&data);
if(enqueue(data))
printf("Enqueue operation succesfull");
else
printf("queue is full");
break;
case 2:
data=dequeue();
if(data)
printf("Data=>%d",data);
else
printf("queue is empty");
break;
case 3:
print();
break;
case 0:
exit(0);
default:
printf("invalid choice");
}
printf("\n");
}
}
int enqueue(int data)
{
if(back==n)
{
return 0;
}
queue[back]=data;
back=back+1;
return 1;
}
int dequeue()
{
if(front==back)
{
return 0;
}
else
{
int data=queue[front];
front=front+1;
return data;
}
}
void print()
{
if(front!=back)
{
for(int i=front;i<back;i++)
{
printf("%d\n",queue[i]);
}
}
}
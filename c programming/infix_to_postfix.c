#include<stdio.h>
char stack[10];
int top=-1;
void push(char);
char pop();
int priority(char);

void main()
{
 char exp[20],optr;
 int i,length;
 printf("\nEnter the infix expression:");
 fgets(exp,20,stdin);
        printf("Postfix Expression:");
 for(i=0; exp[i]!='\0'; i++)
 { 
  if(exp[i]=='(')
  push(exp[i]);
  else if((exp[i]>='a'&& exp[i]<='z')|| (exp[i]>='A'&& exp[i]<='Z'))
  printf("%c",exp[i]);
  else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/')
  {
   if(stack[top]=='('||top==-1)
   {
   push(exp[i]);
   }
   else if(priority(stack[top])>=priority(exp[i]))
   {
     while(priority(stack[top])>=priority(exp[i]))
     {
    optr=pop();
    printf("%c",optr);
     }
     push(exp[i]);
   }
   else
   {
     push(exp[i]);
   }
  }
  else if(exp[i]==')')
  {
   while(stack[top]!='(')
   {
   optr=pop();
   printf("%c",optr);
   }
   top--;
  }
 }
 while(top!=-1)
 {
 optr=pop();
 printf("%c",optr);
 }
 printf("\n");
}
void push(char c)
{
top++;
stack[top]=c;
}
char pop()
{
char op;
op=stack[top];
top--;
return(op);
}
int priority(char optr)
{
 switch(optr)
 {
 case '*':
 case '/':
  return(2);
 case '+':
 case '-':
  return(1);
 }
}
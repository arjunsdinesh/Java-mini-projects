#include<stdio.h>
#include<stdlib.h>
int main()
{
int array[100],searchkey,i,j,n,low,high,location,choice;
void linearsearch(int searchkey,int array[100],int n);
void binarysearch(int searchkey,int arrray[100],int n);
printf("enter size of array");
scanf("%d",&n);
printf("enter element of array\n");
for(i=1;i<=n;i++)
{
scanf("%d",&array[i]);
}
printf("enter search key\n");
scanf("%d",&searchkey);
printf("1.linear search\n");
printf("2.binary search\n");
printf("enter your choice\n");
printf("\n");
scanf("%d",&choice);
switch(choice)
{
case 1:linearsearch(searchkey,array,n);
break;
case 2:binarysearch(searchkey,array,n);
break;
default:printf("wrong choice");
}
return (0);
}
void linearsearch(int searchkey,int array[100],int n)
{
int i,location,flag=0;
for(i=1;i<=n;i++)
{
if(searchkey==array[i])
{
location=i;
printf("the location=%d is %d\n",searchkey,location);
}
}
if(flag==0)
printf("element not found\n");
}
void binarysearch(int searchkey,int array[100],int n)
{
int mid,i,low,high,temp,j,flag=0;
low=0;high=n-1;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(array[j]>array[j+1])
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
while(low<=high)
{
mid=(low+high)/2;
if(array[mid]==searchkey)
{
printf("element found at the location %d",mid);
flag=1;
break;
}
else if(array[mid]<searchkey)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(flag==0)
{
printf("element not found");
}
}
 
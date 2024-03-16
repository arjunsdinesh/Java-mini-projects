#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void traverse();
void insertfront();
void insertend();
void insertany();
void deletefront();
void deleteend();
void deleteany();
void search();

struct node
{
    int data;
    struct node *next;
} *head = NULL, *ptr, *newnode, *prev, *curr;

void main()
{
    int ch;
    while (1)
    {
        printf("\nSingly Linked List Operations\n");
        printf("\n1.Insertion Operation\n");
        printf("2.Deletion Operations\n");
        printf("3.Display\n");
        printf("4.Search\n");
        printf("5.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Insertion Types");
            printf("\n1.Insert at front\n");
            printf("2.Insert at end\n");
            printf("3.Insert after any given element\n");
            printf("4.Search\n");
            printf("5.Exit\n");
            printf("Enter your choice:\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                insertfront();
                break;
            case 2:
                insertend();
                break;
            case 3:
                insertany();
                break;
            case 4:
                search();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
            }
            break;
        case 2:
            printf("Deletion Types");
            printf("\n1.Delete at Front\n");
            printf("2.Delete at end\n");
            printf("3.Delete any given element\n");
            printf("4.Search\n");
            printf("5.Exit\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                deletefront();
                break;
            case 2:
                deleteend();
                break;
            case 3:
                deleteany();
                break;
            case 4:
                search();
                break;
            case 5:
                exit(0);
            default:
                printf("Enter a valid choice\n");
            }
            break;
        case 3:
            traverse();
            break;
        case 4:
            search();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return;
}

void search()
{
    int key, found = 0;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter the element to search:\n");
        scanf("%d", &key);
        ptr = head;
        while (ptr != NULL)
        {
            if (ptr->data == key)
            {
                printf("Element found in the list\n");
                found = 1;
                break;
            }
            ptr = ptr->next;
        }
        if (!found)
        {
            printf("Element not found in the list\n");
        }
    }
}

void insertfront(){
int item;
newnode=(struct node*)malloc(sizeof(struct node ));
printf("\nenter data\n");
scanf("%d",&item);
newnode->data=item;
newnode->next=NULL;
if(head==NULL)
{	
	head=newnode;
}
else 
{
	newnode->next=head;
	head=newnode;
}
}



void insertend(){
int item;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nenter data\n");
scanf("%d",&item);
newnode->data=item;
newnode->next=NULL;
if(head==NULL)
{
	head=newnode;
}
else
{
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
}
}



void insertany(){
int key,i,item;
if(head==NULL)
{
	printf("\nlist is empty\n");
}
else
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	printf("enter the key element\n");
	scanf("%d",&key);
	ptr=head;
	while((ptr->data!=key)&&(ptr->next!=NULL))
	{
		ptr=ptr->next;
	}
	if(ptr->data!=key)
	{
		printf("search failed\n");
	}
	else
	{
		newnode->next=ptr->next;
		ptr->next=newnode;
	}
}
}



void traverse(){
if(head==NULL)
{
	printf("List is Empty");
}
else{
	ptr=head;
	printf("the list is:");
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
}



void deletefront(){
if(head==NULL)
{
	printf("list is empty\n");
}
else{
	ptr=head;
	head=ptr->next;
	printf("deleted element is %d",ptr->data);
	free(ptr);
}
}



void deleteend(){
if(head==NULL)
{
	printf("List is empty\n");
}
else if(head->next==NULL)
{
	ptr=head;
	head=NULL;
	free(ptr);
}
else{
	prev=head;
	curr=head->next;
	while(curr->next!=NULL)
	{
		prev=curr;
		curr=curr->next;
	}	
	printf("deleted element is %d\n",curr->data);
	prev->next=NULL;
	free(curr);
}
}



void deleteany(){
int key;
if(head==NULL)
{

	printf("list is empty");
}
else{
	printf("enter element to delete");
	scanf("%d",&key);
	if(head->data==key)
	{
		ptr=head;
		head=ptr->next;
		printf("deleted element is %d",ptr->data);
		free(ptr);
	}
	else{
		prev=head;
		curr=prev->next;
		while((curr->data!=key)&&(curr->next!=NULL))
		{
			prev=curr;
			curr=curr->next;
		}
		if(curr->data!=key)
		{
			printf("search failed");
		}
		else
			{
			printf("deleted element is %d",curr->data);
			prev->next=curr->next;
			free(curr);
			}
		}
	}
}
                                                                                                                                                                                                                                                       

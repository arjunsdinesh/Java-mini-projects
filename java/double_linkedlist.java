import java.util.Scanner;
class LinkedList
{
private Node head;
class Node
	{
	private int data;
	private Node left;
	private Node right;
	public Node(int data)
		{
		this.data=data;
		this.left=null;
		this.right=null;
		}
	}
public void insert(int data)
{
Node temp=new Node(data);
if(head==null)
	{
	head=temp;
	}
else
	{
	Node ptr=head;
	while(ptr.right!=null)
		{
		ptr=ptr.right;
		}
	ptr.right=temp;
	temp.left=ptr;
	}
}
public void delete()
{
if(head!=null)
	{
	int x=head.data;
	head=head.right;
	if(this.head!=null)
	head.left=null;
	System.out.println("Element"+x+"got deleted");}
	else
	System.out.println("Empty list");
	}
public void display()
{
	if(head==null)
		{
		System.out.println("List is Empty");
		}
	else
		{
		Node ptr=head;
		while(ptr!=null)
			{
			System.out.print(ptr.data+"\t");
			ptr=ptr.right;
			}
		System.out.println();
		}
	}
}
class doubleLL
{
public static void main(String[] args)
	{
	LinkedList list=new LinkedList();
	Scanner sc=new Scanner(System.in);
	String choice="";
	while(!choice.equals("4"))
		{
		System.out.println("1.Insert at End\n2.Delete From Front\n3.Display\n4.Exit\n");
		System.out.println("Enter the choice:");
		choice=sc.nextLine();
		switch(choice)
			{
			case "1":System.out.print("Enter the number to insert:");
			int data=sc.nextInt();
			sc.nextLine();
			list.insert(data);
			System.out.println("Data inserted Successfully");
			break;
			case "2":list.delete();
			break;
			case "3":list.display();
			break;
			case "4":break;
			default:System.out.println("Invalid choice");
			}
		}
	}
}

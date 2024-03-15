import java.util.Scanner;
class tryy
{
public static void main(String[]args)
{
Scanner sc=new Scanner(System.in);
try
{
System.out.println("program to perform division");
System.out.println("enter number-1:");
int a=sc.nextInt();
System.out.println("enter number-2:");
int b=sc.nextInt();
int c=a/b;
System.out.println("result="+c);
}
catch(ArithmeticException e)
{
System.out.println(e.getMessage());
}
finally
{
System.out.println("end of operation");
}
}
}

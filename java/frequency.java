import java.util.Scanner;
public class frq
{
public static void main (String[]args)
{
Scanner scanner=new Scanner(System.in);
System.out.print("enter a string\n");
String inputString=scanner.nextLine();
System.out.print("enter the character to find its frequency:");
char characterToFind=scanner.next().charAt(0);
scanner.close();
int frequency=calculateFrequency(inputString,characterToFind);
System.out.println("frequency of'"+ characterToFind+"'in the string is:"+frequency);
}
public static int calculateFrequency(String inputString,char characterToFind)
{
int frequency=0;
for(int i=0;i<inputString.length();i++)
{
if(inputString.charAt(i)==characterToFind)
{
frequency++;
}
}
return frequency;
}
}

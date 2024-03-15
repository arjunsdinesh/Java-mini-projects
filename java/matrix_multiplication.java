import java.util.Scanner;
public class matrixm
{
public static void main(String[]args)
{
int m1,m2,n1,n2,i,j,k;
Scanner sc=new Scanner(System.in);
System.out.println("enter the no of rows in first matrix");
m1=sc.nextInt();
System.out.println("enter the no of columns in first matrix");
n1=sc.nextInt();
System.out.println("enter the no of rows in second matrix");
m2=sc.nextInt();
System.out.println("enter no of columns in second matrix");
n2=sc.nextInt();
int a[][]=new int[m1][n1];
int b[][]=new int[m2][n2];
int c[][]=new int[n1][m2];
if(n1==m2)
{
System.out.println("enter the element of a:");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
a[i][j]=sc.nextInt();
}
}
System.out.println("enter the element of b:");
for(i=0;i<m2;i++)
{
for(j=0;j<n2;j++)
{
b[i][j]=sc.nextInt();
}
}
System.out.println("Multiplication of matrix a and b:");
for(i=0;i<m1;i++)
{
for(j=0;j<n2;j++)
{
for(k=0;k<n1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
for(i=0;i<m1;i++)
{
for(j=0;j<n2;j++)
{
System.out.print(c[i][j]+" ");
}
System.out.println();
}
}
else
{
System.out.println("not possible");
}
}
}

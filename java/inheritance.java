import java.util.Scanner;
class Employee{
private  String name;
private int age;
private String phone;
private String address;
private double salary;
public void printsalary(){
System.out.println("salary="+salary);
}
public Employee(String name,int age,String phone,String address,double salary){
this.name=name;
this.age=age;
this.phone=phone;
this.address=address;
this.salary=salary;
}
public void displayEmployee(){
System.out.println("Name="+name);
System.out.println("Age="+age);
System.out.println("Phone Number="+phone);
System.out.println("Address="+address);
System.out.println("Salary="+salary);
}
}
class Manager extends Employee{
private String specialization;
private String department;
public Manager(String name,int age,String phone,String address,double salary,String specialization,String department){
super(name,age,phone,address,salary);
this.specialization=specialization;
this.department=department;
}
public void displayManager(){
displayEmployee();
System.out.println("Specialization="+specialization);
System.out.println("Department="+department);
}
}
class Officer extends Employee{
private String specialization;
private String department;
public Officer(String name,int age,String phone,String address,double salary,String specialization,String department){
super(name,age,phone,address,salary);
this.specialization=specialization;
this.department=department;
}
public void displayOfficer(){
displayEmployee();
System.out.println("Specialization="+specialization);
System.out.println("Department="+department);
}
}
class inher{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter Manager Details");
System.out.println("Name:");
String name=sc.nextLine();
System.out.print("Age:");
int age=sc.nextInt();sc.nextLine();
System.out.println("Phone Number:");
String phone=sc.nextLine();
System.out.print("Address:");
String addr=sc.nextLine();
System.out.print("salary:");
double salary=sc.nextDouble();sc.nextLine();
System.out.print("specialization:");
String spec=sc.nextLine();
System.out.print("Department:");
String dept=sc.nextLine();
Manager m=new Manager(name,age,phone,addr,salary,spec,dept);
m.displayManager();
System.out.println("Enter Officer details");
System.out.print("name:");
String name1=sc.nextLine();
System.out.print("Age:");
int age1=sc.nextInt();sc.nextLine();
System.out.print("phone Number:");
String phone1=sc.nextLine();
System.out.print("Address:");
String addr1=sc.nextLine();
System.out.print("salary:");
double salary1=sc.nextDouble();sc.nextLine();
System.out.print("specialization:");
String spec1=sc.nextLine();
System.out.print("Department:");
String dept1=sc.nextLine();
Officer O=new Officer(name1,age1,phone1,addr1,salary1,spec1,dept1);
O.displayOfficer();
}
}
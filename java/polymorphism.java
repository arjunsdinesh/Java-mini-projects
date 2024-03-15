abstract class Shape
{
	public abstract void numberofSides();
	}
class Rectangle extends Shape
{
	public void numberofSides()
	{
		System.out.println("No of sides of square=4");
	}
}
class Triangle extends Shape
{
	public void numberofSides()
	{
		System.out.println("No of sides of a triangle=3");
	}
}
class Hexagon extends Shape
{
	public void numberofSides()
	{
		System.out.println("No of sides of a hexagon=6");
	}
}
class poly
{
	public static void main(String[]args)
	{
		Rectangle r=new Rectangle();
		Triangle t=new Triangle();
		Hexagon h=new Hexagon();
		r.numberofSides();
		t.numberofSides();
		h.numberofSides();
	}
}

class Circle {
	private	float R;
	public void setR(float value)
	{
		R=value;
	}
	
	public double perimeter()
        {
    		return 2*R*Math.PI;
        }
	public float area()
	{
		return (float)(R*R*Math.PI);
	}
	public static void main(String[] args) {
		Circle circ1 = new Circle(8);
		Circle circ2 = new Circle(16);
		System.out.println("area of circ1 is: "+circ1.area());
		System.out.println("perimeter of circ1 is: "+circ1.perimeter());
		System.out.println("area of circ2 is: "+circ2.area());
		System.out.println("perimeter of circ2 is: "+circ2.perimeter());
	}
}

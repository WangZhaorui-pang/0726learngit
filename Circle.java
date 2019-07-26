package niao;

public class Circle {
public double r;

public Circle(double r) {
	super();
	this.r = r;
}

public Circle() {
	
}
public void getArea() {
	System.out.println("面积为："+Math.PI*r*r);
}
public void getPerimeter() {
	System.out.println("周长为："+Math.PI*2*r);
}
}

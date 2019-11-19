package com.base;

public class Triangle extends PlainFigure {

	public Triangle(double d1, double d2, double d3) {
		super(d1, d2, d3);
		if (d1 <= 0 || d2 <= 0 || d3 <= 0) {
			throw new TriangleException("One of the sides is not positive.");
		}
		if (!(d1 + d2 > d3 && d2 + d3 > d1 && d1 + d3 > d2)) {
			throw new TriangleException("Unplayable triangle.");
		}
	}

	@Override
	public double getArea() {
		double p = getPerimeter() / 2;
		return Math.sqrt(p * (p - d1) * (p - d2) * (p - d3));
	}

	@Override
	public double getPerimeter() {
		return d1 + d2 + d3;
	}

	public static boolean isSimilar(Triangle t1, Triangle t2) {
		return t1.d1 / t2.d1 == t1.d2 / t2.d2 && t1.d2 / t2.d2 == t1.d3 / t2.d3;
	}

	public static void main(String[] args) {
		Figure t1 = new Triangle(3, 4, 5);
		Figure t2 = new Triangle(6, 8, 10);

		// Check if equals works
		System.out.println(t1.equals(t2));
		System.out.println(t1.equals(t1));

		// Check if getArea Works
		System.out.println(((Triangle) t1).getArea());
		System.out.println(((Triangle) t2).getArea());

		// Check if getPermeter works
		System.out.println(((Triangle) t1).getPerimeter());
		System.out.println(((Triangle) t2).getPerimeter());

		System.out.println(Triangle.isSimilar((Triangle) t1, (Triangle) t2));
	}

}

package com.base;

public abstract class PlainFigure implements Figure {

	public double d1;
	public double d2;
	public double d3;

	public PlainFigure(double d1, double d2, double d3) {
		this.d1 = d1;
		this.d2 = d2;
		this.d3 = d3;
	}

	@Override
	public boolean equals(Figure otherFigure) {
		if(!(otherFigure instanceof PlainFigure)) {
			return false;
		}

		PlainFigure other = (PlainFigure) otherFigure;

		if (d1 != other.d1)
			return false;
		if (d2 != other.d2)
			return false;
		if (d3 != other.d3)
			return false;
		return true;
	}

	@Override
	public void print() {
		System.out.println("X: " + d1 + ", Y: " + d2 + ", Z" + d3);
	}

	public abstract double getArea();

	public abstract double getPerimeter();
}

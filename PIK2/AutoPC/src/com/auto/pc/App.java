package com.auto.pc;

public class App {

	public static void main(String[] args) {
		IEnhanceComputer comp = new EnhancedComputer(100, 23, 100, true);
		try {
			comp.ABS();
		} catch (InterruptedException e) {
			System.err.println(":(");
		}
	}
}

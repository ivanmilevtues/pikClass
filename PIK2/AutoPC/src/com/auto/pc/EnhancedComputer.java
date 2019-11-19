package com.auto.pc;

public class EnhancedComputer extends BaseComputer implements IEnhanceComputer{

	int breaks;

	boolean slip;

	public EnhancedComputer(double temp, double oil, int breaks, boolean slip) {
		super(temp, oil);
		this.breaks = breaks;
		this.slip = slip;
	}
	
	@Override
	public void ABS() throws InterruptedException {
		if(slip) {
			System.out.println("boksua");
			breaks = (short) (breaks * 0.7);
			Thread.sleep(500);
		}
		slip = false;
	}
}

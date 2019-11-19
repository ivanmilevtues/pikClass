package com.auto.pc;

public class BaseComputer implements IBaseComputer{

	double temp;

	double oil;

	boolean tempAlarm;

	boolean oilAlarm;

	boolean doorOpened;

	boolean zoomerAlarm;

	boolean lightsOn;

	public BaseComputer(double temp, double oil) {
		this.temp = temp;
		this.oil = oil;
	}

	@Override
	public void tempCheck() {
		if (temp > 120) {
			tempAlarm = true;
		} else {
			tempAlarm = false;
		}
	}

	@Override
	public void oilCheck() {
		if (oil > 200) {
			oilAlarm = false;
		} else {
			oilAlarm = true;
		}
	}

	@Override
	public void zoomerCheck() {
		if (lightsOn && doorOpened) {
			zoomerAlarm = true;
		} else {
			zoomerAlarm = false;
		}
	}
}

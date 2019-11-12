package com.cometition.manager.impl;

import com.cometition.manager.Competition;
import com.cometition.manager.Participant;

public class Formula1Competition implements Competition {

	public static Participant[] schedule;

	private int winnersTime; //not used
	
	public Formula1Competition() {}

	// unused
	public Formula1Competition(int winnersTime) {
		this.winnersTime = winnersTime;
	}

	@Override
	public Participant[] getSchedule() {
		return Formula1Competition.schedule;
	}

	// not needed see  FootballComeption.setSchedule for more info
	@Override
	public void setSchedule(Participant[] schedule) {
		Formula1Competition.schedule = schedule;
	}
}
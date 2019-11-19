package com.cometition.manager.impl;

import com.cometition.manager.Competition;
import com.cometition.manager.Participant;

public class HorseComepetition implements Competition {

	public static Participant[] schedule;

	private String breed; //not used
	
	public HorseComepetition() {}

	// unused
	public HorseComepetition(String breed) {
		this.breed = breed;
	}

	@Override
	public Participant[] getSchedule() {
		return HorseComepetition.schedule;
	}

	// not needed see  FootballComeption.setSchedule for more info
	@Override
	public void setSchedule(Participant[] schedule) {
		HorseComepetition.schedule = schedule;
	}

}

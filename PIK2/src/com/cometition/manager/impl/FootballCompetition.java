package com.cometition.manager.impl;

import com.cometition.manager.Competition;
import com.cometition.manager.Participant;

public class FootballCompetition implements Competition {

	public static Participant[] schedule;

	private int fastestGoal; // not used

	public FootballCompetition() {
	}

	// not used
	public FootballCompetition(int fastestGoal) {
		this.fastestGoal = fastestGoal;
	}

	@Override
	public Participant[] getSchedule() {
		return FootballCompetition.schedule;
	}

	// Even though Tomov doesn't mention it. A way cooler design would be 
	// if you add a setSchedule method in the Competition interface, this will resolve all your worries for the second task
	// The solution also provides the code the way he expects you to write it down so no worries.
	// This method is not included in that solution just a hint ;).
	@Override
	public void setSchedule(Participant[] schedule) {
		FootballCompetition.schedule = schedule;
	}

}

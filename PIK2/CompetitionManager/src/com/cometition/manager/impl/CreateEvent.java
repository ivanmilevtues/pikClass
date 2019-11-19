package com.cometition.manager.impl;

import com.cometition.manager.Competition;
import com.cometition.manager.Participant;

public class CreateEvent {

	private String typeOfEvent;

	// This is your typical example of Polymorphism where. We use the Inteface
	// instead of the implementation of the event
	public Competition getEvent(String competitionType) {
		this.typeOfEvent = competitionType;

		if (competitionType.equals("football")) {
			return new FootballCompetition();
		}
		if (competitionType.equals("horse")) {
			return new HorseComepetition();
		}
		if (competitionType.equals("formula1")) {
			return new Formula1Competition();
		}

		throw new EventException("Unkown event name :(");
	}

	public void fillSchedule(Competition ob, Participant[] schedule) {
		if(schedule.length == 0) {
			throw new EmptySetException();
		}

		// Instead of all the dynamic casting you can just use the ClassName.schedule,
		// but than the ob argument is not used at all :shrug:
		if (typeOfEvent.equals("football")) {
			((FootballCompetition) ob).schedule = schedule;
		}
		if (typeOfEvent.equals("horse")) {
			((HorseComepetition) ob).schedule = schedule;
		}
		if (typeOfEvent.equals("formula1")) {
			((Formula1Competition) ob).schedule = schedule;
		}

		// In class, I made use of this solution as it is more OOP in my opinion:
		// see the FootBallComepetion class for more info
		// ob.setSchedule(schedule);
	}

	public static void bets(Competition ob, int id, double bet) {
		Participant participant = null;
		for(int i = 0; i < ob.getSchedule().length; i++) {
			if(ob.getSchedule()[i].getId() == id) {
				participant = ob.getSchedule()[i];
				break;
			}
		}

		if (participant == null) {
			throw new EventException("Participant with id " + id + " not found!");
		}

		double currentBets = participant.getBetForWin();

		currentBets += bet;

		// This formula is bad if your bets in the start are small and will only give 1.1
		double percentage = 1 - (participant.getBetForWin() / currentBets);

		participant.setBetForWin(currentBets);
		percentage = participant.getChanceToWin() - percentage > 1.1 ? participant.getChanceToWin() - percentage: 1.1;
		participant.setChanceToWin(percentage);
	}
}

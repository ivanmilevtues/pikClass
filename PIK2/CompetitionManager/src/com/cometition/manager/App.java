package com.cometition.manager;


import java.util.Arrays;

import com.cometition.manager.impl.CreateEvent;

public class App {

	public static void main(String[] args) {
		CreateEvent eventFactory = new CreateEvent();
		
		Competition footballGame = eventFactory.getEvent("football");
		eventFactory.fillSchedule(footballGame, new Participant[] { 
				new Participant("futbolqga1", 12, 1.6, 500),
				new Participant("Djan, che go vijdam na sport kak cyka", 12, 1.6, 1000),
				new Participant("naduhaniqFutbolqga", 18, 1.8, 2000),
				new Participant("dobriqFutbolqga", 21, 2.0, 3000),
				new Participant("oldSchoolFutbolqga", 72, 1.2, 200)}
				);
		
		// Betting time
		CreateEvent.bets(footballGame, 1, 5);

		CreateEvent.bets(footballGame, 2, 50);

		CreateEvent.bets(footballGame, 3, 200);

		CreateEvent.bets(footballGame, 4, 400);

		CreateEvent.bets(footballGame, 5, 1);

		System.out.println(Arrays.toString(footballGame.getSchedule()));
		
		// The output is the following:
		// The formula is bad imo, but its not the point of the task
		//[Participant [id=1, name=futbolqga1, age=12, chanceToWin=1.5900990099009902, betForWin=505.0],
		// Participant [id=2, name=Djan, che go vijdam na sport kak cyka, age=12, chanceToWin=1.5523809523809524, betForWin=1050.0],
		// Participant [id=3, name=naduhaniqFutbolqga, age=18, chanceToWin=1.709090909090909, betForWin=2200.0],
		// Participant [id=4, name=dobriqFutbolqga, age=21, chanceToWin=1.8823529411764706, betForWin=3400.0],
		// Participant [id=5, name=oldSchoolFutbolqga, age=72, chanceToWin=1.1950248756218906, betForWin=201.0]]


	}
}

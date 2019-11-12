package com.cometition.manager;

public class Participant {

	private static int createdParticipants = 0;

	private int id;

	private String name;

	private int age;

	private double chanceToWin;

	private double betForWin;

	public Participant(String name, int age, double chanceToWin, double betForWin) {
		this.id = ++createdParticipants;
		this.name = name;
		this.age = age;
		this.chanceToWin = chanceToWin;
		this.betForWin = betForWin;
	}

	public double getChanceToWin() {
		return chanceToWin;
	}

	public void setChanceToWin(double chanceToWin) {
		this.chanceToWin = chanceToWin;
	}

	public double getBetForWin() {
		return betForWin;
	}

	public void setBetForWin(double betForWin) {
		this.betForWin = betForWin;
	}

	public int getId() {
		return id;
	}

	public String getName() {
		return name;
	}

	public void setAge(int age) {
		this.age = age;
	}
	
	public int getAge() {
		return age;
	}

	@Override
	public String toString() {
		return "Participant [id=" + id + ", name=" + name + ", age=" + age + ", chanceToWin=" + chanceToWin
				+ ", betForWin=" + betForWin + "]";
	}
}

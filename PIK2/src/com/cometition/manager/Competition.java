package com.cometition.manager;

public interface Competition {

	Participant[] getSchedule();
	
	void setSchedule(Participant[] schedule);
}

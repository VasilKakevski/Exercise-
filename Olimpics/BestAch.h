/*
 * BestAch.h
 *
 *  Created on: May 5, 2017
 *      Author: mediff
 */

#ifndef BESTACH_H_
#define BESTACH_H_

class BestAch {
private:
	int hour;
	int minutes;
	int seconds;
	int miliseconds;
public:
	BestAch(int,int,int,int);
	void PrintInfo();
	virtual ~BestAch();
	int getHour() const;
	void setHour(int hour);
	int getMiliseconds() const;
	void setMiliseconds(int miliseconds);
	int getMinutes() const;
	void setMinutes(int minutes);
	int getSeconds() const;
	void setSeconds(int seconds);
};

#endif /* BESTACH_H_ */

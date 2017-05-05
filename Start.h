/*
 * Start.h
 *
 *  Created on: May 5, 2017
 *      Author: mediff
 */

#ifndef START_H_
#define START_H_
#include "Discipline.h"
#include "Athlets.h"

class Start {
private:
	enum type{
		qualification,quaterfinal,semifinal,final


	} startType;
	Discipline &disc;
	Athlets & ath;
public:


	Start(Discipline&,Athlets&);
	virtual ~Start();

};

#endif /* START_H_ */

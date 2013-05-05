/*
 *  fan-rpm.h
 *
 *  Created on: 20.04.2013
 *      Author: Fredyy90 <frederick.behrends@gmail.com>
 */

#ifndef RPM_INTERVAL_H_
#define RPM_INTERVAL_H_

extern int setRpmPin ( int pin );
extern int setTicksPerRotation ( int ticks );
extern int setTestInterval ( int ticks );
extern int getRpm( void );


#endif /* RPM_INTERVAL_H_ */

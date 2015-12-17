/*
 * IO.h
 *
 *  Created on: Dec 16, 2015
 *      Author: Dale
 */

#ifndef SRC_IO_H_
#define SRC_IO_H_

#include "WPILib.h"

class IO
{
private:
	IO();
	IO(IO const&);
	IO& operator=(IO const&);
	static IO* m_pInstance;

public:
	static IO* GetInstance();
	Joystick*	stickL;
	Joystick*	stickR;
};

#endif /* SRC_IO_H_ */

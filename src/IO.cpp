/*
 * IO.cpp
 *
 *  Created on: Dec 16, 2015
 *      Author: Dale
 */

#include "IO.h"

IO* IO::m_pInstance = NULL;

IO::IO()
{
	// Process operator interface input here.
	stickL = new Joystick(0);
	stickR = new Joystick(1);
}

IO* IO::GetInstance()
{
	if(!m_pInstance) m_pInstance = new IO;
	return m_pInstance;
}

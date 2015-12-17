/*
 * Chassis.h
 *
 *  Created on: Dec 16, 2015
 *      Author: Dale
 */

#ifndef SRC_SUBSYSTEMS_CHASSISSUBSYSTEM_H_
#define SRC_SUBSYSTEMS_CHASSISSUBSYSTEM_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

/** Robot's main chassis, or drivetrain.
 *
 * This must be a singleton class because a robot usually can have only one chassis.
 * The class manages all the driving motors and all methods of driving itself.
 * All activities with the drivetrain must be done via its public methods.
 */
class ChassisSubsystem: public Subsystem
{
private:
	static ChassisSubsystem* m_pInstance;
	RobotDrive m_drive;

	const int LEFTBACKMOTOR = 0;
	const int RIGHTBACKMOTOR = 1;
	const int LEFTFRONTMOTOR = 2;
	const int RIGHTFRONTMOTOR = 3;

	ChassisSubsystem();
	ChassisSubsystem(ChassisSubsystem const&);
	ChassisSubsystem& operator=(ChassisSubsystem const&);
public:
	static ChassisSubsystem* GetInstance();
	void InitDefaultCommand();
	void Drive(double move, double turn, bool squaredInputs = false);
};

#endif /* SRC_SUBSYSTEMS_CHASSISSUBSYSTEM_H_ */

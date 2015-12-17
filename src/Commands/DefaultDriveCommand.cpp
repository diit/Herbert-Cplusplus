/*
 * DefaultDriveCommand.cpp
 *
 *  Created on: Dec 16, 2015
 *      Author: Dale
 */

#include <Commands/DefaultDriveCommand.h>
#include <Subsystems/ChassisSubsystem.h>
#include <IO.h>

DefaultDriveCommand::DefaultDriveCommand()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(ChassisSubsystem::GetInstance());
}

// Called just before this Command runs the first time
void DefaultDriveCommand::Initialize()
{
}

// Called repeatedly when this Command is scheduled to run
void DefaultDriveCommand::Execute()
{
	IO* io = IO::GetInstance();
	double moveSpeed = io->stickL->GetY();
	double moveTurn = io->stickR->GetX();
	double speedMultiplier = (-0.5 * io->stickL->GetZ()) + 0.5;
	double turnMultiplier = (-0.5 * io->stickR->GetZ()) + 0.5;

	// Only driving manual should require Quadratic inputs. By default it should be turned off
	// Therefore here we turn it on explicitly.
	ChassisSubsystem::GetInstance()->Drive(moveSpeed * speedMultiplier, moveTurn * turnMultiplier, true);
}

// Make this return true when this Command no longer needs to run execute()
bool DefaultDriveCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DefaultDriveCommand::End()
{
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultDriveCommand::Interrupted()
{
}

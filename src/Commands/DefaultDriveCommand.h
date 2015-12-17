/*
 * DefaultDriveCommand.h
 *
 *  Created on: Dec 16, 2015
 *      Author: Dale
 */

#ifndef SRC_COMMANDS_DEFAULTDRIVECOMMAND_H_
#define SRC_COMMANDS_DEFAULTDRIVECOMMAND_H_

#include "WPILib.h"

/** Default command for driving the chassis.
 *
 * The default for the chassis is to be driven manually by a human operator.
 * This command reads the inputs from joysticks using the IO (operator interface) class
 * and controls the chassis via its public methods.
 */
class DefaultDriveCommand: public Command
{
public:
	DefaultDriveCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif /* SRC_COMMANDS_DEFAULTDRIVECOMMAND_H_ */

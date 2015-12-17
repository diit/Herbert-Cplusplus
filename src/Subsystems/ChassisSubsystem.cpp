#include <Commands/DefaultDriveCommand.h>
#include <Subsystems/ChassisSubsystem.h>

ChassisSubsystem* ChassisSubsystem::m_pInstance = NULL;

ChassisSubsystem* ChassisSubsystem::GetInstance()
{
	if(!m_pInstance) m_pInstance = new ChassisSubsystem;
	return m_pInstance;
}

ChassisSubsystem::ChassisSubsystem() :
		Subsystem("Chassis")
        , m_drive(LEFTFRONTMOTOR,LEFTBACKMOTOR,RIGHTFRONTMOTOR,RIGHTBACKMOTOR)
{

}

void ChassisSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DefaultDriveCommand());
}

/**
 * Methods for controlling the drive SubSystem,
 * these methods are called via commands.
 *
 * @param move
 * @param turn
 * @param quad
 */
void ChassisSubsystem::Drive(double move, double turn, bool quad)
{
	m_drive.ArcadeDrive(move, turn, quad);
}

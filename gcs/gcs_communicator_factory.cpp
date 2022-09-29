#include "gcs_communicator_factory.h"

// MAVLink
#include "../3dparty/mavlink_v2/ardupilotmega/mavlink.h"

// Internal
#include "../common/mavlink_communicator.h"

#include "../common/handlers/heartbeat_handler.h"
#include "handlers/attitude_handler.h"

using namespace domain;

GcsCommunicatorFactory::GcsCommunicatorFactory()
{}

MavLinkCommunicator* GcsCommunicatorFactory::create()
{
    MavLinkCommunicator* communicator = new MavLinkCommunicator(255, 0);

    new domain::HeartbeatHandler(MAV_TYPE_GCS, communicator);
    //new domain::AttitudeHandler(communicator);

    return communicator;
}

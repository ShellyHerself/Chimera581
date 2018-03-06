#include <mutex>
#include <math.h>
#include <iostream>
#include "../messaging/messaging.h"
#include "../client_signature.h"
#include "../hooks/camera.h"
#include "../hooks/frame.h"
#include "../hooks/tick.h"
#include "../halo_data/map.h"
#include "../halo_data/tag_data.h"
#include "../halo_data/server.h"
#include "../halo_data/table.h"
#include "netcode.h"

ChimeraCommandError netcode_command(size_t argc, const char **argv) noexcept {
    return CHIMERA_COMMAND_ERROR_SUCCESS;
}
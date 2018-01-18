// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/sockets/bsd_u.h"
#include "core/hle/service/sockets/sfdnsres.h"
#include "core/hle/service/sockets/sockets.h"

namespace Service {
namespace Sockets {

void InstallInterfaces(SM::ServiceManager& service_manager) {
    std::make_shared<BSD_U>()->InstallAsService(service_manager);
    std::make_shared<SFDNSRES>()->InstallAsService(service_manager);
}

} // namespace Sockets
} // namespace Service

// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service::APM {

class APM final : public ServiceFramework<APM> {
public:
    explicit APM(std::shared_ptr<Module> apm, const char* name);
    ~APM() = default;

private:
    void OpenSession(Kernel::HLERequestContext& ctx);

    std::shared_ptr<Module> apm;
};

} // namespace Service::APM

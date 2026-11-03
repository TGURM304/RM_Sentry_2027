//
// Created by Interweave on 2026/11/3.
//

#include "utils/os.h"

#include "../config.hpp"

[[noreturn]] void odometry_task(void* args) {
    auto& mailbox = *static_cast<os::queue<app::WheelFeedback>*>(args);

    for (;;) {
        app::WheelFeedback feedback{};
        if (mailbox.receive(feedback)) {

        }

        os::task::sleep(1);
    }
}

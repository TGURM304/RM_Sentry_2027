//
// Created by Interweave on 2026/11/3.
//

#include "utils/os.h"

#include "app_config.hpp"

[[noreturn]] void odometry_task(void* args) {
    auto& mailbox = *static_cast<os::queue<app::WheelFeedback>*>(args);
    app::WheelFeedback wheel_feedback{};

    for (;;) {
        if (mailbox.receive(wheel_feedback, portMAX_DELAY)) {

        }

    }
}

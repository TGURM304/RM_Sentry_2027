//
// Created by Interweave on 2026/11/3.
//

#include "utils/os.h"
#include "bsp/time.h"

#include "app_config.hpp"

[[noreturn]] void chassis_task(void* args) {
    auto& mailbox = *static_cast<os::queue<app::WheelFeedback>*>(args);
    app::WheelFeedback wheel_feedback{};

    for (;;) {
        // 发送当前轮组状态
        wheel_feedback = {};
        wheel_feedback.timestamp = bsp_time_get_ms();
        mailbox.overwrite(wheel_feedback);

        os::task::sleep(1);
    }
}

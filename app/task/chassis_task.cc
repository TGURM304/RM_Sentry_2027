//
// Created by Interweave on 2026/11/3.
//

#include "utils/os.h"
#include "bsp/time.h"

#include "../config.hpp"

[[noreturn]] void chassis_task(void* args) {
    auto& mailbox = *static_cast<os::queue<app::WheelFeedback>*>(args);

    for (;;) {
        // 发送当前轮组状态
        app::WheelFeedback feedback{};
        feedback.timestamp = bsp_time_get_ms();
        mailbox.overwrite(feedback);

        os::task::sleep(1);
    }
}

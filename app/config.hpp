//
// Created by Interweave on 2026/11/3.
//

#ifndef TROBOT_CONFIG_HPP
#define TROBOT_CONFIG_HPP

#include <cstdint>

namespace app {
    // 用于里程计
    struct WheelFeedback {
        // 舵向角度，单位 rad
        float steer_angle[4]{};

        // 驱动电机实际速度，单位 rad/s(?
        float drive_speed[4]{};

        // 采样时间戳，单位 ms
        std::uint32_t timestamp = 0;
    };

}

#endif //TROBOT_CONFIG_HPP

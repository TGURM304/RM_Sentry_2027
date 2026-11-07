//
// Created by Interweave on 2026/11/3.
//

#ifndef TROBOT_CONFIG_HPP
#define TROBOT_CONFIG_HPP

#include <cstdint>

// Warn: 特化机器人代码前，必须修改此处
#define ROBOT_BRIEF "Sentry"

// 底盘
#define COMPILE_CHASSIS

// 云台
// #define COMPILE_GIMBAL

// 若不是同时编译云台和底盘，则启用双控制器选项
#if !(defined(COMPILE_CHASSIS) && defined(COMPILE_GIMBAL))
#define USE_DUAL_CONTROLLER
#endif


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

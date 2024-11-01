# 创建于2024.11.1
# StarsailerOS 架构选择文件
# 源码遵循GNU-GPLV2.0开源协议授权

set(TARGET_NAME Arch)

add_library(${TARGET_NAME} INTERFACE)

# check for current architecture
if (CMAKE_HOST_SYSTEM_PROCESSOR STREQUAL "x86_64")
    add_subdirectory(X86)
    target_link_libraries(${TARGET_NAME}
        INTERFACE
            X86)
else()
    message(FATAL_ERROR "目前只支持X86架构")
endif()
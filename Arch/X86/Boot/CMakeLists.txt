# 创建于2024.11.1
# StarsailerOS X86 Boot Cmake文件
# 源码遵循GNU-GPLV2.0开源协议授权

set(TARGET_NAME Boot)
set(SOURCE_FILE)

file(GLOB SOURCE_FILE "${CMAKE_CURRENT_SOURCE_DIR}/*.S"
                      "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
                      "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
                      "${CMAKE_CURRENT_SOURCE_DIR}/Font.o")

if(SOURCE_FILE)
    add_library(${TARGET_NAME} ${SOURCE_FILE})
else()
    message(FATAL_ERROR "Boot没有文件")
endif()

target_link_libraries(
    ${TARGET_NAME}
)
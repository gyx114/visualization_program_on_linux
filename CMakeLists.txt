cmake_minimum_required(VERSION 3.10)
project(MyGTKApp)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 解决中文乱码（强制 UTF-8）
add_compile_options(-finput-charset=UTF-8 -fexec-charset=UTF-8)

# 查找必要的包
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

# 添加可执行文件
add_executable(my_app main.cpp)

# 链接 GTKmm 库
target_link_libraries(my_app ${GTKMM_LIBRARIES})

# 添加头文件路径
target_include_directories(my_app PRIVATE ${GTKMM_INCLUDE_DIRS})

# 添加编译选项
target_compile_options(my_app PRIVATE ${GTKMM_CFLAGS_OTHER})

set_target_properties(my_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)

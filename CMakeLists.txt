cmake_minimum_required(VERSION 3.27.0)
project(linuxcdemo VERSION 1.0 LANGUAGES C)

# specify the C standard
set(CMAKE_CXX_STANDARD C99)
set(CMAKE_C_STANDARD_REQUIRED True)
# set output executable file directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories("./includes/")

# set source file path
# string(CONCAT c_file "${CMAKE_SOURCE_DIR}/" "./src/ch01/prob-1-17.c")
# set(c_file "src/ch01/ch1-10-1.c")
# compile source file to binary executable file
# add_executable(linuxcdemo "${c_file}")

set(MY_EXECUTABLE_NAME "linuxcdemo")

add_executable(
  ${MY_EXECUTABLE_NAME}
  "src/ch01/ch1-10-1.c"
)
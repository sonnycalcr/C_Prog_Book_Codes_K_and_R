cmake_minimum_required(VERSION 3.27.0)
project(c_prog_book_codes_k_and_r VERSION 1.0 LANGUAGES C CXX)

# specify the C standard
set(CMAKE_CXX_STANDARD C99)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Only work with Unix/Ninja
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set output executable file directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories("./includes/")

set(MY_EXECUTABLE_NAME "cbookdemo")

add_executable(
  ${MY_EXECUTABLE_NAME}
  "drafts/ch06/demo01.c"
)
# Declare the minimum required CMake version
cmake_minimum_required(VERSION 3.7)

# Name the project
project(validator)

# Define a variable containing a list of source files for the project
set(
  PROG_SRCS
  resources/d4.xpm
  resources/d6.xpm
  resources/d8.xpm
  resources/d10.xpm
  resources/d12.xpm
  resources/d20.xpm
  resources/d100.xpm
  resources/icon.xpm
  source/main.cpp
  source/main-window.cpp
)

# Request the required wxWidgets libs
find_package(wxWidgets 3.0 COMPONENTS core base REQUIRED)

# Include the wxWidgets use file to initialize various settings
include(${wxWidgets_USE_FILE})
# set(OpenCV_DIR "<cusompath>" CACHE PATH '' ${SHOULD_FORCE_CACHE})
# find_package(OpenCV REQUIRED CONFIG)

# Define the build target for the executable
add_executable(${PROJECT_NAME} ${PROG_SRCS})

# Link required libraries to the executable
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})

install (TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)

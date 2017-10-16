add_executable(
  shell-app 
  main.cpp 
  motionModuleStub.cpp 
  command.cpp 
  microphoneStub.cpp
  voiceController.cpp
 )
 
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

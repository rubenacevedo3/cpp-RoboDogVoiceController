set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    motionModuleStubTest.cpp
    ../app/motionModuleStub.cpp
    commandTest.cpp
    ../app/command.cpp
    microphoneStubTest.cpp
    ../app/microphoneStub.cpp
    voiceControllerTest.cpp
    ../app/voiceController.cpp
    voiceControlInterfaceTest.cpp
    ../app/voiceControlInterface.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(cpp-test PUBLIC gtest)

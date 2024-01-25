cmake_minimum_required(VERSION 3.26)
project(calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(calculator main.cpp
        Position.cpp
        Position.h
        Display.cpp
        Display.h
        Font.cpp
        Font.h
        Button.cpp
        Button.h
        Background.cpp
        Background.h
        Calculator.cpp
        Calculator.h
        RPN.cpp
        RPN.h
        States.cpp
        States.h
        StateEnum.h
        MouseEvent.cpp
        MouseEvent.h
        fontsEnum.h
        ProgramDisplay.cpp
        ProgramDisplay.h
)

target_link_libraries(calculator sfml-graphics sfml-audio)

find_package(SFML 2.6 COMPONENTS graphics audio REQUIRED)
cmake_minimum_required(VERSION 3.26)
project(Polymorphism_Exercise_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Polymorphism_Exercise_2 main.cpp
        Account_Util.cpp
        Account_Util.h
        Account.cpp
        Account.h
        Checking_Account.cpp
        Checking_Account.h
        Savings_Account.cpp
        Savings_Account.h
        Trust_Account.cpp
        Trust_Account.h)

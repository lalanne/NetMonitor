cmake_minimum_required(VERSION 2.8)

SET(BINARY_NAME tests)

SET(GTEST_DIR "/usr/include/gtest" CACHE STRING "Options: [$ENV{HOME}/gtest")
SET(GMOCK_DIR "/usr/include/gmock" CACHE STRING "Options: [$ENV{HOME}/gmock")

LINK_DIRECTORIES(${GTEST_DIR}/)
LINK_DIRECTORIES(${GMOCK_DIR}/)

SET(SOURCES
    tests.cpp
    mainTests.cpp
    CaptureOutputTests.cpp
    LinuxPipeTests.cpp
    TcpdumpTests.cpp
    TimeFilterTests.cpp
    DateFilterTests.cpp
    IPVersionFilterTests.cpp
    PacketLenghtFilterTests.cpp
    SourceIpFilterTests.cpp
    SourcePortFilterTests.cpp
    DestinationIpFilterTests.cpp
    DestinationPortFilterTests.cpp
    FileStorageTests.cpp
    FilterFactoryTests.cpp
    src/LineExamples.cpp
    ../src/Tcpdump.cpp
    ../src/CaptureOutput.cpp
    ../src/LinuxPipe.cpp
    ../src/GetStringFromStream.cpp
    ../src/ProcessOutput.cpp
    ../src/DateFilter.cpp
    ../src/Date.cpp
    ../src/TimeFilter.cpp
    ../src/Time.cpp
    ../src/IPVersion.cpp
    ../src/IPVersionFilter.cpp
    ../src/PacketLenghtFilter.cpp
    ../src/PacketLenght.cpp
    ../src/LineFilter.cpp
    ../src/SourceFilter.cpp
    ../src/SourceIpFilter.cpp
    ../src/SourceIpIcmpUnreacheableFilter.cpp
    ../src/SourceIp802_3Filter.cpp
    ../src/SourceIp.cpp
    ../src/SourcePortFilter.cpp
    ../src/SourcePortIcmpUnreacheableFilter.cpp
    ../src/SourcePort802_3Filter.cpp
    ../src/SourcePort.cpp
    ../src/DestinationFilter.cpp
    ../src/DestinationIpFilter.cpp
    ../src/DestinationIpIcmpUnreacheableFilter.cpp
    ../src/DestinationIp802_3Filter.cpp
    ../src/DestinationIp.cpp
    ../src/DestinationPortFilter.cpp
    ../src/DestinationPortIcmpUnreacheableFilter.cpp
    ../src/DestinationPort802_3Filter.cpp
    ../src/DestinationPort.cpp
    ../src/FileStorage.cpp
    ../src/Register.cpp
    ../src/TransportSourceInformation.cpp
    ../src/TransportDestinationInformation.cpp
    ../src/TransportInformation.cpp
    ../src/PacketInformation.cpp
    ../src/TimeStamp.cpp
    ../src/FilterFactory.cpp
    ../src/SymbolNotFoundException.cpp
)

ADD_EXECUTABLE(${BINARY_NAME} ${SOURCES})

INCLUDE_DIRECTORIES(../include/)
INCLUDE_DIRECTORIES(include/)

INCLUDE_DIRECTORIES(${GTEST_DIR}/include)
INCLUDE_DIRECTORIES(${GMOCK_DIR}/include)

TARGET_LINK_LIBRARIES(${BINARY_NAME} gtest )
TARGET_LINK_LIBRARIES(${BINARY_NAME} gmock)




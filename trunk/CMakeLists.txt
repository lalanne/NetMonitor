cmake_minimum_required(VERSION 2.8)

SET(BINARY_NAME netMonitor)

SET(BOOST_DIR_INCLUDE "/usr/include/boost" CACHE STRING "Options: [$ENV{HOME}/boost")
SET(BOOST_DIR_LINK "/usr/include/boost" CACHE STRING "Options: [$ENV{HOME}/boost")

LINK_DIRECTORIES(${BOOST_DIR_LINK}/)

SET(SOURCES
    src/main.cpp
    src/Tcpdump.cpp
    src/CaptureOutput.cpp
    src/LinuxPipe.cpp
    src/GetStringFromStream.cpp
    src/ProcessOutput.cpp
    src/ProcessOutputThread.cpp
    src/DateFilter.cpp
    src/Date.cpp
    src/TimeFilter.cpp
    src/Time.cpp
    src/IPVersion.cpp
    src/IPVersionFilter.cpp
    src/PacketLenghtFilter.cpp
    src/PacketLenght.cpp
    src/LineFilter.cpp
    src/SourceFilter.cpp
    src/SourceIpFilter.cpp
    src/SourceIpIcmpUnreacheableFilter.cpp
    src/SourceIp802_3Filter.cpp
    src/SourceIp.cpp
    src/SourcePortFilter.cpp
    src/SourcePortIcmpUnreacheableFilter.cpp
    src/SourcePort802_3Filter.cpp
    src/SourcePort.cpp
    src/DestinationFilter.cpp
    src/DestinationIpFilter.cpp
    src/DestinationIpIcmpUnreacheableFilter.cpp
    src/DestinationIp802_3Filter.cpp
    src/DestinationIp.cpp
    src/DestinationPortFilter.cpp
    src/DestinationPortIcmpUnreacheableFilter.cpp
    src/DestinationPort802_3Filter.cpp
    src/DestinationPort.cpp
    src/FileStorage.cpp
    src/Register.cpp
    src/TransportSourceInformation.cpp
    src/TransportDestinationInformation.cpp
    src/TimeStamp.cpp
    src/TransportInformation.cpp
    src/PacketInformation.cpp
    src/FilterFactory.cpp
    src/SymbolNotFoundException.cpp
)

ADD_EXECUTABLE(${BINARY_NAME} ${SOURCES})

INCLUDE_DIRECTORIES(include/)
INCLUDE_DIRECTORIES(${BOOST_DIR_INCLUDE}/)

TARGET_LINK_LIBRARIES(${BINARY_NAME} boost_thread-mt)
TARGET_LINK_LIBRARIES(${BINARY_NAME}  boost_system-mt)





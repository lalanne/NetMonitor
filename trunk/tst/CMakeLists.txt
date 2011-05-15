
SET(BINARY_NAME tests)

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
    ../src/SourceIpFilter.cpp
    ../src/SourceIp.cpp
    ../src/SourcePortFilter.cpp
    ../src/SourcePort.cpp
    ../src/DestinationIpFilter.cpp
    ../src/DestinationIp.cpp
    ../src/DestinationPortFilter.cpp
    ../src/DestinationPort.cpp
    ../src/FileStorage.cpp
    ../src/Register.cpp
    ../src/TransportSourceInformation.cpp
    ../src/TransportDestinationInformation.cpp
    ../src/TransportInformation.cpp
    ../src/PacketInformation.cpp
    ../src/TimeStamp.cpp
)

ADD_EXECUTABLE(${BINARY_NAME} ${SOURCES})

INCLUDE_DIRECTORIES(../include/)
INCLUDE_DIRECTORIES(include/)

TARGET_LINK_LIBRARIES(${BINARY_NAME} pthread)
TARGET_LINK_LIBRARIES(${BINARY_NAME} gtest )
TARGET_LINK_LIBRARIES(${BINARY_NAME} gmock_main)




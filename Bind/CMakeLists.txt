PROJECT( BindExample )
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)
 
 
find_package( Boost 
 
    COMPONENTS
    regex
    system
    filesystem
    thread
    signals
     
    REQUIRED
)
 
 
INCLUDE_DIRECTORIES(
    headers
    ${Boost_INCLUDE_DIR}
)
 
link_directories( ${Boost_LIBRARY_DIR} )
 
SET( CMAKE_CXX_FLAGS "-g -Wall" )
 
SET( SOURCE_PATH source )
 
SET( CPP
    ${SOURCE_PATH}/main.cpp
)
 
SET( EXE BindExample )
 
 
ADD_EXECUTABLE(
    ${EXE}
    ${HPP}
    ${CPP}
)
 
TARGET_LINK_LIBRARIES(
    ${EXE}
    ${Boost_LIBRARIES}
)
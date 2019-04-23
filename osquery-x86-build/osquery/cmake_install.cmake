# Install script for directory: C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/osquery

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/OSQUERY")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmainx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/Debug/osqueryd.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/Release/osqueryd.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/MinSizeRel/osqueryd.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/RelWithDebInfo/osqueryd.exe")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/osqueryi")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/tools/deployment/osqueryctl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmainx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Program Files (x86)/OSQUERY/share/osquery/osquery.example.conf")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Program Files (x86)/OSQUERY/share/osquery" TYPE FILE FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/tools/deployment/osquery.example.conf")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Program Files (x86)/OSQUERY/var/osquery/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Program Files (x86)/OSQUERY/var/osquery" TYPE DIRECTORY FILES "")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmainx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Program Files (x86)/OSQUERY/share/osquery/packs/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Program Files (x86)/OSQUERY/share/osquery/packs" TYPE DIRECTORY FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/packs/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmainx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Program Files (x86)/OSQUERY/etc/init.d/osqueryd")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Program Files (x86)/OSQUERY/etc/init.d" TYPE PROGRAM RENAME "osqueryd" FILES "C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/tools/deployment/osqueryd.initd")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/config/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/core/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/database/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/devtools/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/dispatcher/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/distributed/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/events/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/extensions/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/filesystem/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/logger/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/registry/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/sql/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/remote/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/utils/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/carver/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/external/cmake_install.cmake")
  include("C:/Users/preet/Desktop/pe-sieve/osquery-plgx-extension/osquery/build/windows10/osquery/tables/cmake_install.cmake")

endif()


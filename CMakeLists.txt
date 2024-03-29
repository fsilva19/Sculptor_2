cmake_minimum_required(VERSION 3.14)

project(escultor LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(escultor
  main.cpp
  sculptor.cpp
  sculptor.h
  voxel.h
  figurageometrica.cpp
  figurageometrica.h
  putvoxel.cpp
  putvoxel.h
  cutvoxel.cpp
  cutvoxel.h
  putbox.cpp
  putbox.h
  cutbox.cpp
  cutbox.h
  putsphere.cpp
  putsphere.h
  cutsphere.cpp
  cutsphere.h
  putellipsoid.cpp
  putellipsoid.h
  cutellipsoid.cpp
  cutellipsoid.h
  lerDados.cpp
  lerDados.h
  texto.txt
)
target_link_libraries(escultor Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS escultor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.10)
project(ProjectName)

set(NAME launch)
set(SRC 
    main.cpp 
    header.cpp)
set(FLAGS -Wall -Wextra -Werror -pedantic -Wconversion -O3)
set(HEADER header.cpp)
set(MAIN main.cpp)
#add_executable(${PROJECT_NAME} ${SRC})

add_library(${PROJECT_NAME}-lib STATIC ${HEADER})
add_executable(${PROJECT_NAME} ${MAIN})
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)


target_compile_options(${PROJECT_NAME}-lib PRIVATE ${FLAGS})
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})

add_executable(${PROJECT_NAME}-ut tests/test.cpp)
target_link_libraries(${PROJECT_NAME}-ut ${PROJECT_NAME}-lib)
target_compile_options(${PROJECT_NAME}-ut PRIVATE ${FLAGS})

target_compile_features(${PROJECT_NAME}-lib PRIVATE cxx_std_17)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_compile_features(${PROJECT_NAME}-ut PRIVATE cxx_std_17)

# target_link_libraries(<target> ... <item>... ...)

# add_library(lib STATIC functions.cpp modules.cpp)
# add_executable(main main.cpp)
# add_executable(ut tests.cpp)
# target_link_libraries(main lib)
# target_link_libraries(ut lib)

enable_testing()
add_test(NAME someTests COMMAND ${PROJECT_NAME}-ut)
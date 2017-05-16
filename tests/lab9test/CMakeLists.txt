include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})

set(TEST_LAB_NUMBER 9)

#######################################################################
##  TESTS
#######################################################################
add_gtest_with_memleak(base_serializer libserialization)
add_gtest_with_memleak(xml_serializer libserialization)
add_gtest_with_memleak(json_serializer libserialization)


#######################################################################
##  ALL TESTS
#######################################################################
add_executable(lab9_all_tests ${SOURCE_FILES} ../../lab9/academiaserializer/Room.cpp ../../lab9/academiaserializer/Room.h ../../lab9/academiaserializer/Building.cpp ../../lab9/academiaserializer/Building.h ../../lab9/academiaserializer/Serializable.cpp ../../lab9/academiaserializer/Serializable.h ../../lab9/academiaserializer/Serialization.h ../../lab9/academiaserializer/main.cpp)

target_link_libraries(lab9_all_tests ${GTEST_LIBS})
target_link_libraries(lab9_all_tests libserialization)
target_link_libraries(lab9_all_tests memleak)
target_link_libraries(lab9_all_tests stringutility)

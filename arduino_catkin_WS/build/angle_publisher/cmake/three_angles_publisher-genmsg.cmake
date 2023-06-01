# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "three_angles_publisher: 1 messages, 0 services")

set(MSG_I_FLAGS "-Ithree_angles_publisher:/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(three_angles_publisher_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg" NAME_WE)
add_custom_target(_three_angles_publisher_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "three_angles_publisher" "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(three_angles_publisher
  "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/three_angles_publisher
)

### Generating Services

### Generating Module File
_generate_module_cpp(three_angles_publisher
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/three_angles_publisher
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(three_angles_publisher_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(three_angles_publisher_generate_messages three_angles_publisher_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg" NAME_WE)
add_dependencies(three_angles_publisher_generate_messages_cpp _three_angles_publisher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(three_angles_publisher_gencpp)
add_dependencies(three_angles_publisher_gencpp three_angles_publisher_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS three_angles_publisher_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(three_angles_publisher
  "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/three_angles_publisher
)

### Generating Services

### Generating Module File
_generate_module_eus(three_angles_publisher
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/three_angles_publisher
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(three_angles_publisher_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(three_angles_publisher_generate_messages three_angles_publisher_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg" NAME_WE)
add_dependencies(three_angles_publisher_generate_messages_eus _three_angles_publisher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(three_angles_publisher_geneus)
add_dependencies(three_angles_publisher_geneus three_angles_publisher_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS three_angles_publisher_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(three_angles_publisher
  "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/three_angles_publisher
)

### Generating Services

### Generating Module File
_generate_module_lisp(three_angles_publisher
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/three_angles_publisher
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(three_angles_publisher_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(three_angles_publisher_generate_messages three_angles_publisher_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg" NAME_WE)
add_dependencies(three_angles_publisher_generate_messages_lisp _three_angles_publisher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(three_angles_publisher_genlisp)
add_dependencies(three_angles_publisher_genlisp three_angles_publisher_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS three_angles_publisher_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(three_angles_publisher
  "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/three_angles_publisher
)

### Generating Services

### Generating Module File
_generate_module_nodejs(three_angles_publisher
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/three_angles_publisher
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(three_angles_publisher_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(three_angles_publisher_generate_messages three_angles_publisher_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg" NAME_WE)
add_dependencies(three_angles_publisher_generate_messages_nodejs _three_angles_publisher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(three_angles_publisher_gennodejs)
add_dependencies(three_angles_publisher_gennodejs three_angles_publisher_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS three_angles_publisher_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(three_angles_publisher
  "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/three_angles_publisher
)

### Generating Services

### Generating Module File
_generate_module_py(three_angles_publisher
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/three_angles_publisher
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(three_angles_publisher_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(three_angles_publisher_generate_messages three_angles_publisher_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/shrouk/Arduino/arduino_catkin_WS/src/angle_publisher/msg/Angle.msg" NAME_WE)
add_dependencies(three_angles_publisher_generate_messages_py _three_angles_publisher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(three_angles_publisher_genpy)
add_dependencies(three_angles_publisher_genpy three_angles_publisher_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS three_angles_publisher_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/three_angles_publisher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/three_angles_publisher
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(three_angles_publisher_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/three_angles_publisher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/three_angles_publisher
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(three_angles_publisher_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/three_angles_publisher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/three_angles_publisher
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(three_angles_publisher_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/three_angles_publisher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/three_angles_publisher
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(three_angles_publisher_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/three_angles_publisher)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/three_angles_publisher\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/three_angles_publisher
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(three_angles_publisher_generate_messages_py std_msgs_generate_messages_py)
endif()

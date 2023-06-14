project(
    'message',
    'cpp',
    version : '2.1'
)

message_src = files(
    'src/messagetwo.cpp',
    'main.cpp'
)

executable(
    meson.project_name(),
    message_src
)

# Library for linking in consuming projects

message_lib_src = [
    'src/messagetwo.cpp'
]

message_lib_inc = include_directories(
    'src'
)

message_lib = library(
    'message_lib',
    message_lib_src,
)

message_lib_dep = declare_dependency(
    include_directories : message_lib_inc,
    link_with : message_lib
)
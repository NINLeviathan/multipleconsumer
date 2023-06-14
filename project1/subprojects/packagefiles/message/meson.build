project(
    'message',
    'cpp',
    version : 'a.1.0'
)

message_src = files(
    'src/message.cpp',
    'main.cpp'
)

executable(
    meson.project_name(),
    message_src
)

# Library for linking in consuming projects

message_lib_src = [
    'src/message.cpp'
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
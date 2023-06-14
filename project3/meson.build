project(
    'consumer',
    'cpp',
    version : '3.0'
)

consumer_src = files(
    'main.cpp'
)

message_lib_dep = subproject('message').get_variable('message_lib_dep')

executable(
    meson.project_name(),
    consumer_src,
    dependencies : [message_lib_dep]
)

hilos_incl = [include_directories('include')]
hilos_srcs = [
    'src/source.cpp',
    'src/saludo.cpp'
]
hilos_args = []
hilos_link = []
hilos_deps = [
    thread_dep,
]


hilos_exe = executable('hilos',
                    hilos_srcs,
                    include_directories: hilos_incl, 
                    cpp_args: hilos_args,
                    dependencies: hilos_deps,
                    link_with: hilos_link)

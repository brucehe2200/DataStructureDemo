# create the library, the shared file will auto add the ".so" and "lib" into the name
# as follow, it will create the libMyClass.so and libHello.so

add_library(MyClass SHARED myclass.cpp myclass.h)
add_library(Hello SHARED hello.cpp hello.h)


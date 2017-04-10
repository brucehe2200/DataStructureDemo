classUser: sharedlib classUser.cc
	 g++ classUser.cc ./libMyClass.so ./libHello.so
sharedlib: myclass.cpp myclass.h hello.h hello.cpp
	g++ -fPIC -shared myclass.cpp -o libMyClass.so
	g++ -fPIC -shared hello.cpp -o libHello.so
clean:
	-rm *.out *.so *.a
	-rm cmake_install.cmake CMakeCache.txt

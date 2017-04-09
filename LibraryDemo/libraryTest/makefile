classUser: classUser.cc sharedlib
	 g++ classUser.cc ./libMyClass.so ./libHello.so
sharedlib:../library/hello.cpp ../library/myclass.cpp
	g++ -fPIC -shared ../library/hello.cpp -o libHello.so
	g++ -fPIC -shared ../library/myclass.cpp -o libMyClass.so
clean:
	-rm *.out *.so *.a
	 -rm cmake_install.cmake CMakeCache.txt

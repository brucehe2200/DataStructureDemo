classUser: sharedlib classUser.cc
	 g++ classUser.cc ./libMyClass.so
sharedlib: myclass.cpp myclass.h
	g++ -fPIC -shared myclass.cpp -o libMyClass.so
clean:
	-rm *.out *.so *.a

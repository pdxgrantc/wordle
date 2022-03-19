cc = g++
exeFile = app
$(exeFile): main.o filedata.o
	$(cc) main.o filedata.o -o $(exeFile)
filedata.o: filedata.cpp
	$(cc) -c filedata.cpp
main.o: main.cpp
	$(cc) -c main.cpp

clean:
	-rm *.o
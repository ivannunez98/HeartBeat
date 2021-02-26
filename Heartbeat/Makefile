Heart: beat_functions.o beat_main.o
	g++ beat_functions.o beat_main.o -o MyBeat

beat_functions.o: beat_functions.cpp beat_functions.h
	g++ -c beat_functions.h beat_functions.cpp

beat_main.o: beat_main.cpp
	g++ -c beat_main.cpp

clean:
	rm *.o MyBeat beat_functions.h.gch

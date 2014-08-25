CXX = g++
CFlags = -g -Wall -pendatic

OBJECT = wargame.o

wargame: $(OBJECT)
	$(CXX) $(OBJECT) -o wargame

run: wargame
	./wargame

clean:
	rm *.o

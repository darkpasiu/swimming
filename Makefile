# $@ - oznacza pełną nazwę celu bieżącego
# $< - oznacza pierwszy plik z listy bieżących zależności
# $? - oznacza listę plików z bieżących zależności, które są nieaktualne (ze spacjami pomiędzy nimi)
# $^ - oznacza wszystkie bieżące zależności (ze spacjami pomiędzy nimi)
# $* - oznacza odwołanie do dopasowanego wzorca (najczęściej w regułach wzorców o których możesz przeczytać nieco dalej)

CC = g++
CFLAGS = -Wall -O2 -std=c++0x
LDLIBS = -lpthread

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o,$(SRCS))

EXE = bin


all: clean $(EXE)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $(DEBUGFLAG) $< -o $@

$(EXE): $(OBJS) 
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS) 


.PHONY: list clear_screen clean 

list:
	@echo $(SRCS)
	@echo $(OBJS)

clean:
	@echo
	@echo cleaning 
	rm -f *.o $(EXE) 
	@echo

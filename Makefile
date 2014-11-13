# $@ - oznacza pełną nazwę celu bieżącego
# $< - oznacza pierwszy plik z listy bieżących zależności
# $? - oznacza listę plików z bieżących zależności, które są nieaktualne (ze spacjami pomiędzy nimi)
# $^ - oznacza wszystkie bieżące zależności (ze spacjami pomiędzy nimi)
# $* - oznacza odwołanie do dopasowanego wzorca (najczęściej w regułach wzorców o których możesz przeczytać nieco dalej)

# compiler
CC = g++
CFLAGS = -Wall -O2 

# libraries
LDLIBS = 

# files and folders
SRCDIR = src
OUTDIR = out
SRCS   = $(wildcard $(SRCDIR)/*.cpp)
OBJS   = $(patsubst $(SRCDIR)/%.cpp,$(OUTDIR)/%.o,$(SRCS))

EXE = bin

# targets
all: create_outdir $(EXE)

$(EXE): $(OBJS) 
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS) 

$(OUTDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) -c $(CFLAGS) $(DEBUGFLAG) $< -o $@


.PHONY: list clear_screen clean create_outdir 
list:
	@echo $(SRCS)
	@echo $(OBJS)

clean:
	@echo
	@echo cleaning 
	rm -f $(OUTDIR)/*.o $(EXE)
	rm -rf $(OUTDIR)
	@echo

create_outdir:
	mkdir -p $(OUTDIR)

compila:
	g++ Arquivos/Headers/*.cpp Arquivos/main.cpp -o EdLangInterpreter.o

run:
	./EdLangInterpreter.o 
clean:
	rm EdLangInterpreter.o

shell:
	g++ Arquivos/Headers/*.cpp Arquivos/shell.cpp -o EdLangInterpreter.o

install:
	g++ Arquivos/Headers/*.cpp Arquivos/main.cpp -o Interpreter.o

run:
	./Interpreter.o 
clean:
	rm EdLangInterpreter.o

shell:
	g++ Arquivos/Headers/*.cpp Arquivos/shell.cpp -o Shell.o

windows:
	g++ Arquivos/Headers/*.cpp Arquivos/main.cpp -o Interpreter.exe

shellWIN:
	g++ Arquivos/Headers/*.cpp Arquivos/shell.cpp -o Shell.exe

staticWIN:
	g++ -static Arquivos/Headers/*.cpp Arquivos/main.cpp -o Interpreter.exe

static:
	g++ -static Arquivos/Headers/*.cpp Arquivos/main.cpp -o Interpreter.o

staticSHWIN:
	g++ -static Arquivos/Headers/*.cpp Arquivos/shell.cpp -o Shell.exe

staticSH:
	g++ -static Arquivos/Headers/*.cpp Arquivos/shell.cpp -o Shell.o


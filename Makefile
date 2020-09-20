compila:
	g++ Arquivos/Headers/*.cpp Arquivos/main.cpp -o Interpreter.o

run:
	./Interpreter.o 
clean:
	rm EdLangInterpreter.o

shell:
	g++ Arquivos/Headers/*.cpp Arquivos/shell.cpp -o Shell.o

windows:
	g++ Arquivos/Headers/*.cpp Arquivos/main.cpp -o Interpreter.exe

staticWIN:
	g++ -static Arquivos/Headers/*.cpp Arquivos/main.cpp -o Interpreter.exe

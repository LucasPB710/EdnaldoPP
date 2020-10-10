install:
	g++ Arquivos/main.cpp Arquivos/Headers/*.cpp -lsfml-graphics -lsfml-window -lsfml-system -o Ednaldo++.o
run:
	./Ednaldo++.o
shell:
	g++ Arquivos/shell.cpp Arquivos/Headers/*.cpp -lsfml-graphics -lsfml-window -lsfml-system -o Ednaldo++.o

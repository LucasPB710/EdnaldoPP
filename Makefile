install:
	"Compilando o interpreter..."
	@g++ Arquivos/main.cpp Arquivos/Headers/*.cpp -lsfml-graphics -lsfml-window -lsfml-system -o Ednaldo++.o
	"Compilando o shell..."
	@g++ Arquivos/shell.cpp Arquivos/Headers/*.cpp -lsfml-graphics -lsfml-window -lsfml-system -o Shell.o
	"Fim."

run:
	./Ednaldo++.o
runShell:
	./Shell.o

shell:
	g++ Arquivos/shell.cpp Arquivos/Headers/*.cpp -lsfml-graphics -lsfml-window -lsfml-system -o Shell.o
staticWIN:
	i686-w64-mingw32-g++ Arquivos/shell.cpp Arquivos/Headers/*.cpp -DSFML_STATIC -I ~/Downloads/SFML-2.5.1-windows-gcc-7.3.0-mingw-32-bit/SFML-2.5.1/include/ -L ~/Downloads/SFML-2.5.1-windows-gcc-7.3.0-mingw-32-bit/SFML-2.5.1/lib/ -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lwinmm -lgdi32 -lfreetype -static-libstdc++ -static-libgcc -o EdnaldoPP.exe

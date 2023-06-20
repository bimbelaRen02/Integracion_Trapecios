bin/Integracion_Por_Trapecios.exe : src/main.cpp
	@echo Compilando programita...
	g++ -o bin/Integracion_Por_Trapecios.exe src/main.cpp -Iinclude

clean : bin/Integracion_Por_Trapecios.exe
	rm -f *.exe

run : bin/Integracion_Por_Trapecios.exe
	./bin/Integracion_Por_Trapecios.exe
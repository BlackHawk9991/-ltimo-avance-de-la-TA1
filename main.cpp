#include <conio.h>
#include "arrAsteroide.h"
#include "arrEnemigo.h"
#include "Controlador.h"
/*#include<thread>
#include<cstdlib>
#include<chrono>*/

/*void tiempo() {
	int segundo = 120;
	while (1 == 1) {
		system("CLS");
		cout << "Temporizador" << endl;
		cout << "Segundos : " << segundo << endl;
		sleep_for(seconds(1));
		segundo--;


		if (segundo == 0) {
			cout << "¡¡ EL TIEMPO SE ACABÓ !!";
		}
	}
}*/

int main() {
	srand(time(NULL));
	Console::BackgroundColor = ConsoleColor::Black;
	Console::SetWindowSize(150, 35);
	Console::CursorVisible = false;
	char tecla;

	Controlador* c = new Controlador();
	c->dibujarTodo();
	while (true) {
		c->borrarTodo();

		c->Colision();
		if (_kbhit()) {
			tecla = _getch();
			tecla = toupper(tecla);
			c->getAlien()->mover(tecla);
		}
		c->dibujarTodo();

		//n->dibujar();
		//p->dibujarP();
		//a->dibujarAsteroide();
		//e->dibujarEnemigo();

		_sleep(100);
	}

	_getch();
	return 0;
}

#pragma once
#include "Plutonio.h"
#include "Enemigo.h"
#include "Asteroide.h"
#include "Nave.h"
#include "Alien.h"
#include "arrPlutonio.h"

using namespace System::Drawing;

class Controlador {
private:
	Alien* a;
	Plutonio** arr;
	int n;
	int cont;
	int contTotal;
public:
	Controlador() {
		a = new Alien();
		cont = 0;
		contTotal = 0;
	}

	~Controlador() {}

	Alien* getAlien() {
		return a;
	}

	void borrarTodo() {
		a->borrar();
		for (int i = 0; i < n; i++) {
			arr[i]->borrar();
		}
	}

	void dibujarTodo() {
		a->dibujar();
		for (int i = 0; i < n; i++) {
			arr[i]->dibujar();
		}
	}

	void Colision() {
		for (int i = 0; i < n; i++) {
			if (a->getRectangle().IntersectsWith(arr[i]->getRectangle()) {
				//Falta ver cómo eliminar el arreglo de plutonio
				
			}
		}
	}

	int getcont() { return cont; }
	int getContTotal() { return contTotal; }
};

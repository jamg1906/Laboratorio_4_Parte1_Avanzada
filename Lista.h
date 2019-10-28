#pragma once
#include "Nodo.h"
#include "Pokemon.h"
class Lista
{
private:
	Nodo* HeadLista = nullptr;
	Nodo* EndLista = nullptr;
public:
	int elementos_en_lista = 0;
	void Agregar(Pokemon Pokemon_Agregar);
	Pokemon Eliminar();
	System::String^ ObtenerLista(Lista L);
public:
	Lista();
	~Lista();
};


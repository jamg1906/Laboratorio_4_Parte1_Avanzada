#include "Lista.h"
Lista::Lista()
{
	elementos_en_lista = 0;
}
Lista::~Lista()
{
}

void Lista::Agregar(Pokemon Pokemon_Agregar)
{
	//METODO QUE AGREGA UN ELEMENTO EN LA LISTA (AL FINAL)
	Nodo* N = new Nodo();
	Nodo* Aux = new Nodo();
	N->Pokemones = Pokemon_Agregar;
	if (HeadLista == nullptr)
	{
		N->siguiente = nullptr;
		HeadLista = N;
		EndLista = N;
	}
	else
	{
		EndLista->siguiente = N;
		EndLista = N;
	}
	elementos_en_lista++;
}

Pokemon Lista::Eliminar()
{
	//mETODO QUE ELIMINA UN DIGITIO DESDE LA CABEZA DE LA LISTA.
	if (HeadLista == nullptr)
	{
		Pokemon* T = new Pokemon();
		T->National_number = -1;
		return *T;
	}
	else
	{
		Nodo* Temp = new Nodo();
		Pokemon Regresar = HeadLista->Pokemones;
		HeadLista = HeadLista->siguiente;
		elementos_en_lista--;
		return Regresar;
	}
}

System::String^ Lista::ObtenerLista(Lista L)
{
	System::String^ res = "";
	return res;
}
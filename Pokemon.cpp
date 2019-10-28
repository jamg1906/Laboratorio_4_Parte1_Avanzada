#include "Pokemon.h"
#include <string>
#include <iostream>
using namespace System;
using namespace std;

Pokemon::Pokemon()
{
	National_number = 0;
	generacion = 0;
	nombre_pokemon = "";
}

Pokemon::~Pokemon()
{

}

void Pokemon::MostrarPokemon(Pokemon P)
{
	System::String^ res;
	res = "Nombre: ";
	String^ c = gcnew String(P.nombre_pokemon.c_str());
	res += c;
	res += "\n" + "Ndex: " + P.National_number + "\nGeneración: " +P.generacion;
	System::Windows::Forms::MessageBox::Show(res);
}

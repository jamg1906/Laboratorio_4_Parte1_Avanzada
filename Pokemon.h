#pragma once
#include <string>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
class Pokemon
{
public:
	int generacion = 0;
	int National_number = 0;
	std::string nombre_pokemon = "";
	
public:
	void MostrarPokemon(Pokemon P);

public:
	Pokemon();
	~Pokemon();
};


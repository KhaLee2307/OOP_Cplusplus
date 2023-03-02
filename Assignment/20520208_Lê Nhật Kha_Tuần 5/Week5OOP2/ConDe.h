#pragma once
#include "Animal.h"

class ConDe : public Animal
{
public:
	static unsigned short SoLuong;
	ConDe(unsigned short Con = (unsigned short)rand() % 10, unsigned short Sua = (unsigned short)rand() % 10, std::string Keu = "buw buw buw buw buw buw buwwwwwwwww") : Animal(Con, Sua, Keu)
	{
		SoLuong += (this->Con + 1);
		Animal::SoLuong += (this->Con + 1);
		Animal::LuongSua += this->Sua;
	}
	virtual~ConDe() {}
};
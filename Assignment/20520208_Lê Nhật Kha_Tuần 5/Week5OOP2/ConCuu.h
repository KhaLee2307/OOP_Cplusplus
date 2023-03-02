#pragma once
#include "Animal.h"

class ConCuu : public Animal
{
public:
	static unsigned short SoLuong;
	ConCuu(unsigned short Con = (unsigned short)rand() % 10, unsigned short Sua = (unsigned short)rand() % 5, std::string Keu = "beeee beeee beeee beeee beeeeeee") : Animal(Con, Sua, Keu)
	{
		SoLuong += (this->Con + 1);
		Animal::SoLuong += (this->Con + 1);
		Animal::LuongSua += this->Sua;
	}
	virtual~ConCuu() {}
};
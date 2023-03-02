#pragma once
#include "Animal.h"

class ConBo : public Animal
{
public:
	static unsigned short SoLuong;
	ConBo(unsigned short Con = (unsigned short) rand() % 10, unsigned short Sua = (unsigned short) rand() % 20, std::string Keu = "umbo umbo umbo umbooooooooo") : Animal(Con, Sua, Keu)
	{
		SoLuong += (this->Con + 1);
		Animal::SoLuong += (this->Con + 1);
		Animal::LuongSua += this->Sua;
	}
	virtual~ConBo() {}
};
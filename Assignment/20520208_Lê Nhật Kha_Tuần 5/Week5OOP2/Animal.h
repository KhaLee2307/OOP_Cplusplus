#pragma once
#include <iostream>
#include <string>
#include <random>
#include <time.h>

class Animal
{
protected:
	unsigned short Con;
	unsigned short Sua;
	std::string Keu;
public:
	static unsigned short SoLuong;
	static unsigned short LuongSua;
	Animal(unsigned short Con = 0, unsigned short Sua = 0, std::string Keu = "Hello") : Con(Con), Sua(Sua), Keu(Keu) {}
	virtual ~ Animal() {}
	virtual void setCon(unsigned short x);
	virtual void setSua(unsigned short x);
	virtual void setKeu(std::string x);
	virtual unsigned short getCon();
	virtual unsigned short getSua();
	virtual std::string getKeu();
};
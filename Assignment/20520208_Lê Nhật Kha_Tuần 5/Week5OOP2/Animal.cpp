#include "Animal.h"

void Animal::setCon(unsigned short x)
{
	this->Con = x;
}
void Animal::setSua(unsigned short x)
{
	this->Sua = x;
}
void Animal::setKeu(std::string x)
{
	this->Keu = x;
}
unsigned short Animal::getCon()
{
	return this->Con;
}
unsigned short Animal::getSua()
{
	return this->Sua;
}
std::string Animal::getKeu()
{
	return this->Keu;
}
#include "CanHoChungCu.h"

void CanHoChungCu::inputCanHo()
{
	std::cout << "Nhap dia chi can ho: ";
	getline(std::cin, this->DiaChi);
	std::cout << "Nhap vi tri tang: ";
	std::cin >> this->TangBaoNhieu;
	CanHo::inputCanHo();
	this->CanHoConTrong += (int)this->ConTrong;
	this->CanHoDaThue += (int)!this->ConTrong;
}
void CanHoChungCu::outputCanHo()
{
	std::cout << std::setw(16) << std::left << "Chung cu";
	std::cout << std::setw(24) << std::left << this->DiaChi;
	std::cout << std::setw(16) << std::left << this->TangBaoNhieu;
	CanHo::outputCanHo();
}
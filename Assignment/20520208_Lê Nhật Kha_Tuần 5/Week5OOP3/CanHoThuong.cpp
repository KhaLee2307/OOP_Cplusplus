#include "CanHoThuong.h"

void CanHoThuong::inputCanHo()
{
	std::cout << "Nhap dia chi can ho: ";
	getline(std::cin, this->DiaChi);
	std::cout << "Nhap vi tri tang: ";
	std::cin >> this->BaoNhieuTang;
	CanHo::inputCanHo();
	this->CanHoConTrong += (int)this->ConTrong;
	this->CanHoDaThue += (int)!this->ConTrong;
}
void CanHoThuong::outputCanHo()
{
	std::cout << std::setw(16) << std::left << "Thuong";
	std::cout << std::setw(24) << std::left << this->DiaChi;
	std::cout << std::setw(16) << std::left << this->BaoNhieuTang;
	CanHo::outputCanHo();
}